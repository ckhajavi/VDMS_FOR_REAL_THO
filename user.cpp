#include "user.h"

User::User()
: age(0), birthMonth(0), birthYear(0), birthDay(0), gender(MALE)
{
}

// read information from .txt and load it into user object
// paramters will most likely change
User User::loadUser()
{
    return User();
}

//get methods
std::string User::getUserName() const
{
    return userName;
}
std::string User::getFName() const
{
    return fName;
}

std::string User::getMName() const
{
    return mName;
}

std::string User::getLName() const
{
    return lName;
}

std::string User::getCellPhone() const
{
    return cellPhone;
}

std::string User::getHomePhone() const
{
    return homePhone;
}

std::string User::getWorkPhone() const
{
    return workPhone;
}

int User::getAge() const
{
    return age;
}
int User::getBirthMonth() const
{
    return birthMonth;
}

int User::getBirthYear() const
{
    return birthYear;
}

int User::getBirthDay() const
{
    return birthDay;
}

std::string User::getLastFourSSN() const
{
    return plainTextSSN.substr(5);
}

std::string User::getAddr1() const
{
    return addr1;
}

std::string User::getAddr2() const
{
    return addr2;
}
std::string User::getCity() const
{
    return city;
}

std::string User::getState() const
{
    return state;
}

std::string User::getCountry() const
{
    return country;
}

std::string User::getEmail() const
{
    return email;
}

std::string User::getSecurityQuestion1() const
{
    return securityQuestion1;
}

std::string User::getSecurityAnswer1() const
{
    return securityAnswer1;
}

std::string User::getSecurityQuestion2() const
{
    return securityQuestion2;
}

std::string User::getSecurityAnswer2() const
{
    return securityAnswer2;
}

enumGender User::getGender() const
{
    return gender;
}
