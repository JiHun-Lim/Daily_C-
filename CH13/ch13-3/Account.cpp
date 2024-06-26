#include "BankingCommonDecl.h"
#include "Account.h"


Account::Account(int ID, int money, String name) : accID(ID), balance(money)
{
    cusName = name;
}


int Account::GetACCID() const
{
    return accID;
}

void Account::Deposit(int money)
{
    balance += money;
}

int Account::Withdraw(int money)
{
    if (balance < money)
        return 0;
    
    balance -= money;
    return money;
}

void Account::ShowAccInfo() const
{
    cout << "ID : " << accID << endl;
    cout << "Name : " << cusName << endl;
    cout << "Balance : " << balance << endl;

}
