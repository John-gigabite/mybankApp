#ifndef User_H
#define User_H

#include <string>
#include <cstdlib>
#include <iostream>
#pragma once


using namespace std;


class User{
private:
    int accountNum = 111111;
    std:: string firstName;
    string lastName;
    float accAmount = 0; //float instead of double, only need 2 decimals
    string password;
    string userName;
    string generateUsername();
public:
    User(string first, string last); //constructor
    string getName();
    int getAccNum();
    void setAccNum(int num);
    void addFunds(float money);
    void subFunds(float money);
    float checkFunds();
    void setPswrd(string newPswrd);
};



#endif