#include "User.h"

User::User(string first, string last){
    firstName = first;
    lastName = last;
    userName = generateUsername();

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
string User::generateUsername(){
    for(int i = 0; i < firstName.size()*0.5; i++){
        userName.push_back(firstName[i]);
    }
    for(int i = 0; i < lastName.size()*0.5; i++){
        userName.push_back(lastName[i]);
    }
    cout << "You're UserName is: "<< userName << endl;
    return userName;
}
void User::setPswrd(string newPswrd){
    password = newPswrd;
}