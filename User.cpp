#include "User.h"

User::User(string first, string last){
    firstName = first;
    lastName = last;

}
string User::getName(){
        return firstName + " " + lastName;
    }
int User::getAccNum(){
    return accountNum;
}
void User::setAccNum(int num){
    accountNum = num;
}
void User::addFunds(float money){
    accAmount += money;
}
void User::subFunds(float money){
    accAmount -= money;
}
float User::checkFunds(){
    return accAmount;
}