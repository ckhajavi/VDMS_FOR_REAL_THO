#include "user.h"


User::User()
//: age(""), birthMonth(""), birthYear(""), birthDay(""), gender(MALE)
{
        capacity = 16;
        for ( int i = 0; i < capacity; ++i)
        {
            userArray.append("");
        }
        count = 0;
}

void User::setFileName()
{
    QDir directory;
    fileName = directory.homePath();
    fileName.append("/");
    fileName.append(fName);
    fileName.append(".txt");
    qDebug() << fileName;
}

void User::loadUser()
{
    QFile file(fileName);
    if (!file.exists())
    {
       wrongFile = new wrongFileDialog();
       //wrongFile -> show();
       wrongFile->exec();
    }
    else
    {
        file.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream in(&file);
        while(!in.atEnd())
        {
            QString line = in.readLine();
            userArray = line.split(",");
        }
        file.close();
        for (int i = 0; i< userArray.size(); ++i)
        {
            qDebug() << userArray[i];
        }
        userName = userArray[0];
        plainTextPassword = userArray[1];
        fName = userArray[2];
        mName = userArray[3];
        lName = userArray[4];
        age = userArray[5];
        DOB = userArray[6];
        plainTextSSN =userArray[7];
        addr1 = userArray[8];
        addr2 = userArray[9];
        city = userArray[10];
        country = userArray[11];
        email = userArray[12];
        securityAnswer1 = userArray[13];
        securityAnswer2 = userArray[14];
    }

}

void User::saveUser()
{

/***************ADD YOUR OWN PATH ********************/
    /*QDir directory;
    fileName = directory.homePath();
    fileName.append("/");
    fileName.append(fName);
    fileName.append(".txt");*/
        qDebug() << fileName;
        QFile file(fileName);
        file.open(QIODevice::WriteOnly | QIODevice::Text);
        QTextStream out(&file);
        for( int i = 0; i< userArray.size(); ++i)
        {
            out << userArray[i] << ",";
        }
        file.close();
}

void User::setUserName(const QString& newUserName )
{
    userName = newUserName;
    userArray[0] = userName;
}

void User::setPassword(const QString& newPassword)
{
    plainTextPassword = newPassword;
    userArray[1] = plainTextPassword;
}

void User::setFName(const QString& newFname )
{
    fName = newFname;
    userArray[2] = fName;
}

void User::setMName(const QString& newMname)
{
    mName = newMname;
    userArray[3] = mName;
}

void User::setLName( const QString& newLname)
{
    lName = newLname;
    userArray[4]= lName;
}

void User::setCellPhone(const QString & newCell)
{
    cellPhone = newCell;
   // userArray[5] = cellPhone;
}

void User::setHomePhone(const QString & newHomePhone)
{
    homePhone = newHomePhone;
   // userArray[6] = homePhone;
}

void User::setWorkPhone(const QString & newWorkPhone)
{
    workPhone = newWorkPhone;
    //userArray[7] = workPhone;
}

void User::setAge(const QString & newAge)
{
    age = newAge;
    userArray[5] = age;
}

void User::setDOB(const QString & newDOB)
{
    DOB = newDOB;
    userArray[6] = DOB;
}

void User::setSSN(const QString & newSSN)
{
    plainTextSSN = newSSN;
    userArray[7] = plainTextSSN;
}

void User::setAddr1(const QString & newAddr1)
{
    addr1 = newAddr1;
    userArray[8] = addr1;
}

void User::setAddr2(const QString & newAddr2)
{
    addr2 = newAddr2;
    userArray[9] = addr2;
}

void User::setCity(const QString & newCity)
{
    city = newCity;
    userArray[10] = city;
}

void User::setState(const QString & newState)
{
    state = newState;
}

void User::setCountry(const QString& newCountry)
{
    country = newCountry;
    userArray[11] = country;

}

void User::setEmail(const QString& newEmail)
{
    email = newEmail;
    userArray[12] = email;
}

void User::setSecurityQuestion1( const QString& newSecurityQ)
{
    securityQuestion1 = newSecurityQ;
}

void User::setSecurityQuestion2(const QString& newSecurityQ)
{
    securityQuestion2 = newSecurityQ;
}

void User::setSecurityAnswer1(const QString& newSecurityA)
{
    securityAnswer1 = newSecurityA;
    userArray[13] = securityAnswer1;
}

void User::setSecurityAnswer2(const QString& newSecurityA)
{
    securityAnswer2 = newSecurityA;
    userArray[14] = securityAnswer2;
}

void User::setGender(const enumGender& newGender)
{
    gender = newGender;
}

//get methods
QString User::getUserName() const
{

    return userName;
}
QString User::getFName() const
{
    return fName;
}

QString User::getMName() const
{
    return mName;
}

QString User::getLName() const
{
    return lName;
}

QString User::getCellPhone() const
{
    return cellPhone;
}

QString User::getHomePhone() const
{
    return homePhone;
}

QString User::getWorkPhone() const
{
    return workPhone;
}

QString User::getAge() const
{
    return age;
}


QString User::getDOB() const
{
    return DOB;
}

QString User::getLastFourSSN() const
{
    return plainTextSSN;
}

QString User::getAddr1() const
{
    return addr1;
}

QString User::getAddr2() const
{
    return addr2;
}
QString User::getCity() const
{
    return city;
}

QString User::getState() const
{
    return state;
}

QString User::getCountry() const
{
    return country;
}

QString User::getEmail() const
{
    return email;
}

QString User::getSecurityQuestion1() const
{
    return securityQuestion1;
}

QString User::getSecurityAnswer1() const
{
    return securityAnswer1;
}

QString User::getSecurityQuestion2() const
{
    return securityQuestion2;
}

QString User::getSecurityAnswer2() const
{
    return securityAnswer2;
}

enumGender User::getGender() const
{
    return gender;
}
