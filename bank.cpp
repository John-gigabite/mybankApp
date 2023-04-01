#include <iostream>
#include <vector>
#include <string>
#include "User.cpp"

using namespace std;
string choice;
string name1, name2;
string pswrd;
float amount;
vector<User> userList; //Create option for 
bool homeFlag = true;

int generateAcc()
{
    int accNum = rand() % 1000000 + 1;
    for (int i = 0; i < userList.size(); i++)
    {
        if (accNum == userList[i].getAccNum())
        {
            while (accNum == userList[i].getAccNum())
            {
                accNum = rand() % 1000000 + 1;
            }
        }
    }
    return accNum;
}

void printWelcMenu()
{
    cout << "Welcome! Select an option below:" << endl;
    cout << "1. Login to your account." << endl;
    cout << "2. Create an account." << endl;
}
void printHomeMenu()
{
    cout << "What would you like to do?" << endl;
    cout << "1. Deposit funds" << endl;
    cout << "2. Withdraw funds" << endl;
    cout << "3. Logout" << endl;
}

int main()
{
    while (true)
    {
        printWelcMenu();
        cin >> choice;

        //Logging in to account
        if (choice == "1")
        { // refactor for better input handling
            cout << "logging in ..." << endl;
        }
        //Creating account
        else if (choice == "2")
        {
            cout << "First name: ";
            cin >> name1;
            cout << "Last name: ";
            cin >> name2;

            User user1 = User(name1, name2);
            int num1 = generateAcc();

            cout << "Create a password: ";
            cin >> pswrd;
            user1.setPswrd(pswrd);
            user1.setAccNum(num1);
            userList.push_back(user1);
            while (homeFlag){
                printHomeMenu();
                cin >> choice;
                if (choice == "1"){
                    cout << "How much will you deposit? $";
                    cin >> amount; // Fix later
                    user1.addFunds(amount);
                    cout << "Successfully deposited $" << amount << " into your account." << endl;
                    cout << "(Balance: " << user1.checkFunds() << ")" << endl;
                }
                else if (choice == "2"){
                    cout << "How much would you like to withdraw? $";
                    cin >> amount;
                    user1.subFunds(amount);
                    cout << "Successfully withdrew $" << amount << " from your account." << endl;
                    cout << "(Balance: " << user1.checkFunds() << ")" << endl;
                }
                else if (choice == "3"){
                    cout << "You have been logged out." << endl;
                    homeFlag = false;
                }
            }
        }
    }
}