#include "stocklist.h"
#include <QTableWidgetItem>


StockList::StockList()
{
    stockMap = new QMap<QString, Stock>;
    totalSpent = 0;
    stockTotal = 0;
    totalSpent = 0; //total spent on stocks with bought for price;
    todaysGains = 0;
    totalGains = 0;
}


void StockList::addStock(const Stock& newStock)
{
    if (stockMap->contains(newStock.getTicker()) && newStock.isOwned()) //if stock is already owned
    {
        Stock temp;
        temp = newStock + stockMap->value(newStock.getTicker());
        stockMap->insert(temp.getTicker(), temp);
    }
    else
    {
        stockMap->insert(newStock.getTicker(), newStock);
    }
    //update member variables stockTotalValue, and totalSpent
    setTotalSpent();
    setStockTotal();
    setTodaysGains();
    setTotalGains();
    /*QMap<QString, Stock>::const_iterator i = stockMap->constBegin(); //using an iterator to iterate through the Map
    while (i != stockMap->constEnd()) {
        qDebug() << i.key() << " : " << i.value().getCost() << endl;
        ++i;
    }*/
}

bool StockList::sellStock( Stock & theStock)
{
    if (stockMap->contains(theStock.getTicker())) //if stock is already owned
    {
        if (theStock.getShares() > stockMap->value(theStock.getTicker()).getShares())  //if user is trying to sell more than they own
         {
            qDebug() << "sorry not enough shares" <<endl;
            //QMessageBox::information(this, "Cannot Complete Transaction", "Sorry you do not own enough shares");

            return false;


         }
        else if(theStock.getShares() == stockMap->value(theStock.getTicker()).getShares())  //if trying to sell all of the shares of a stock
        {
            Stock temp;
            temp = theStock - stockMap->value(theStock.getTicker());
            stockMap->insert(temp.getTicker(), temp);
//<<<<<<< HEAD
//=======
            return true;

//>>>>>>> ff0e63a8194a579775e5daa7aa2884b27c7e6fb7
        }
        else
        {
            Stock temp;
            temp = theStock - stockMap->value(theStock.getTicker());
            stockMap->insert(temp.getTicker(), temp);
            return true;
        }
    }
    else
    {
        qDebug() << "Cannot sell a stock you do not own" <<endl;
        return false;
    }
}

void StockList::deleteStock(const Stock& theStock) //removes the stock from the map containing all the users favorite and owned stocks
{
    if(stockMap->contains(theStock.getTicker()))  //only valid if the stock exist in the map
    {
        stockMap->take(theStock.getTicker());
    }
}

//sets totalSpent
void StockList::setTotalSpent()
{
    double totalCost = 0;  //temp value to hold total spent
    QMap<QString, Stock>::const_iterator i = stockMap->constBegin(); //using an iterator to iterate through the Map
    while (i != stockMap->constEnd()) {
        totalCost = totalCost + i.value().getCost();
        ++i;
    }
    totalSpent = totalCost;  //change member variable
}

//sets stockTotalValue
void StockList::setStockTotal()
{
    double temp = 0;
    QMap<QString, Stock>::const_iterator i = stockMap->constBegin(); //using an iterator to iterate through the Map
    while (i != stockMap->constEnd()) {
        temp = temp + i.value().getLatestPrice()*i.value().getShares();
        ++i;
    }
    stockTotal = temp;
}

void StockList::setTotalGains()
{
    /*double totalGain = 0;
    QMap<QString, Stock>::const_iterator i = stockMap->constBegin(); //using an iterator to iterate through the Map
    while (i != stockMap->constEnd()) {
        totalGain = totalGain + ((i.value().getLatestPrice() - i.value().getCost())*i.value().getShares());
    }
    return totalGain;*/
    /*double gains = 0;
    double stockTotal = stockTotal();
    double totalCost = totalCost();
    gains = stockTotal - totalCost;
    return gains;*/
    setStockTotal();
    setTotalSpent();
    totalGains = getStockTotal() - getTotalSpent();


}

void StockList::setTodaysGains()
{
    double gains;
    QMap<QString, Stock>::const_iterator i = stockMap->constBegin(); //using an iterator to iterate through the Map
    while (i != stockMap->constEnd()) {
        gains = gains + (i.value().getLatestPrice() - i.value().getOpenPrice())*i.value().getShares();
        ++i;
    }
    todaysGains = gains;
}

double StockList::getStockTotal()
{
    return stockTotal;
}

double StockList::getTotalSpent()
{
    return totalSpent;
}

double StockList::getTodaysGains()
{
    return todaysGains;
}

double StockList::getTotalGains()
{
    return totalGains;
}

StockList::~StockList(){
    delete stockMap;
    stockMap = NULL;

}
