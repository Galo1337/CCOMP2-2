#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main(){
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};
    cout << "Initial account name is " << account1.getName() << " balance is $" 
                << account1.getBalance() << endl;
    cout << "Initial account name is " << account2.getName() << " balance is $"
                << account2.getBalance() << endl;

    cout << "\nEnter deposit amount for account1";
    int depositAmount;
    cin >>  depositAmount;
    cout << "adding .... " << depositAmount << " to account1 balance.";
    account1.deposit(depositAmount);

    cout << "\nEnter deposit amount for account2";
    cin >>  depositAmount;
    cout << "adding .... " << depositAmount << " to account1 balance.";
    account2.deposit(depositAmount);

    cout << "Initial account name is " << account1.getName() << " balance is $" 
                << account1.getBalance() << endl;
    cout << "Initial account name is " << account2.getName() << " balance is $"
                << account2.getBalance() << endl;


/*
    cout << "\nPlease enter the account name: ";
    string theName;
    getline(cin, theName);
    myAccount.setName(theName);

    cout << "Name in object myAccount is: " << myAccount.getName() << endl;
*/
    return 0;
}
