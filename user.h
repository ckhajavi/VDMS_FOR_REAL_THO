#ifndef USER_H
#define USER_H

#include <iostream>
using namespace std;

enum enumGender { MALE, FEMALE };

class User
{
public:
    //default constructor
    User();

    User loadUser();

    //get methods
    string getUserName() const;
    string getFName() const;
    string getMName() const;
    string getLName() const;
    string getCellPhone() const;
    string getHomePhone() const;
    string getWorkPhone() const;
    int getAge() const;
    int getBirthMonth() const;
    int getBirthYear() const;
    int getBirthDay() const;
    string getLastFourSSN() const;
    string getAddr1() const;
    string getAddr2() const;
    string getCity() const;
    string getState() const;
    string getCountry() const;
    string getEmail() const;
    string getSecurityQuestion1() const;
    string getSecurityAnswer1() const;
    string getSecurityQuestion2() const;
    string getSecurityAnswer2() const;
    enumGender getGender() const;

private:
    string userName;
    string plainTextPassword;

    string fName, mName, lName;
    string cellPhone, homePhone, workPhone;
    int age;
    int birthMonth, birthYear, birthDay;
    string plainTextSSN;
    string addr1;
    string addr2;
    string city;
    string state;
    string country;
    string email;
    string securityQuestion1;
    string securityAnswer1;
    string securityQuestion2;
    string securityAnswer2;
    enumGender gender;
};

#endif // USER_H
