//
//  Function.cpp
//  Assignment02
//
//  Created by Le Pham Nhat Quynh on 11/4/21.
//

#include "Function.h"
BankAccount::BankAccount(){
    account=0;
    name="Empty";
    SID=0;
    balance=0;
}
BankAccount::BankAccount(int account,string name,int SID,float balance){
    this->account=account;
    this->name=name;
    this->SID=SID;
    this->balance=balance;
}
BankAccount::BankAccount(const BankAccount& other){
    this->account=other.account;
    this->name=other.name;
    this->SID=other.SID;
    this->balance=other.balance;
}
void BankAccount::input(){
    cout<<"Type the information\n";
    int account;
    string name;
    int SID;
    float balance;
    cout<<"Account: ";cin>>account;
    cout<<"Full name: ";cin>>name;
    cout<<"SID: ";cin>>SID;
    cout<<"Balance: ";cin>>balance;
    *this=BankAccount(account,name,SID,balance);
}
void BankAccount::output(){
    cout<<"Account: "<<account<<endl;
    cout<<"Full name: "<<name<<endl;
    cout<<"SID: "<<SID<<endl;
    cout<<"Balance: "<<balance<<endl;
}
void BankAccount::deposit(){
    cout<<"Type the money ";
    float money;
    cin>>money;
    balance+=money;
    cout<<"Deposit success!!\n";
}
void BankAccount::withdraw(){
    cout<<"Type the money ";
    float money;
    cin>>money;
    if (balance-money>=50000)
    {
        balance-=money;
        cout<<"Withdraw success!!\n";
    }
    else
        cout<<"Withdraw unsuccess. Balance must be at least 50000\n";
}
void BankAccount::checkBalance(){
    cout<<"Balance: "<<balance<<endl;
}
SavingBankAccount::SavingBankAccount():BankAccount(){
    interestRate=0;
    period=0;
    savingMonth=0;
}
SavingBankAccount::SavingBankAccount(int account,string name,int SID,float balance,float interestRate,int period,int savingMonth):BankAccount(account,name,SID,balance){
    this->interestRate=interestRate;
    this->period=period;
    this->savingMonth=savingMonth;
    int ans=balance*interestRate/12*min(savingMonth,period);
    ans+=balance*2/12*max(savingMonth-period,0);
    this->balance+=ans;
}
SavingBankAccount::SavingBankAccount(const SavingBankAccount& other):BankAccount(other){
    this->interestRate=other.interestRate;
    this->period=other.period;
    this->savingMonth=other.savingMonth;
}
void SavingBankAccount::input(){
    cout<<"Type the information\n";
    int account;
    string name;
    int SID;
    float balance;
    cout<<"Account: ";cin>>account;
    cout<<"Full name: ";cin>>name;
    cout<<"SID: ";cin>>SID;
    cout<<"Balance: ";cin>>balance;
    cout<<"Interest rate: ";cin>>interestRate;
    cout<<"Period: ";cin>>period;
    cout<<"Number of saving months until now: ";cin>>savingMonth;
    *this=SavingBankAccount(account,name,SID,balance,interestRate,period,savingMonth);
}
void SavingBankAccount::output(){
    BankAccount::output();
    cout<<"Interest rate: "<<interestRate<<endl;
    cout<<"Period: "<<period<<endl;
    cout<<"Number of saving months until now: "<<savingMonth<<endl;
}
void SavingBankAccount::deposit(){
    if (savingMonth<period)
        cout<<"Deposit is unavailable now due to lack of saving month\n";
    else
        BankAccount::deposit();
}
void SavingBankAccount::withdraw(){
    if (savingMonth<period)
        cout<<"Withdraw is unavailable now due to lack of saving month\n";
    else
        BankAccount::withdraw();
}
void SavingBankAccount::withdrawImmediately(){
    period=0;
    interestRate=2;
    BankAccount::withdraw();
}
void SavingBankAccount::checkBalance(){
    cout<<"Balance: "<<balance<<endl;
}
void SavingBankAccount::checkInterest(){
    cout<<"Interest rate: "<<interestRate<<endl;
}

