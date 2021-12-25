//
//  Function.h
//  Assignment02
//
//  Created by Le Pham Nhat Quynh on 11/4/21.
//

#ifndef Function_h
#define Function_h
#include <iostream>
using namespace std;
class BankAccount{
private:
    int account;
    string name;
    int SID;
protected:
    float balance;
public:
    BankAccount();
    BankAccount(int account,string name,int SID,float balance);
    BankAccount(const BankAccount& other);
    void input();
    void output();
    void deposit();
    void withdraw();
    void checkBalance();
};
class SavingBankAccount: public BankAccount{
private:
    float interestRate;
    int period;
    int savingMonth;
public:
    SavingBankAccount();
    SavingBankAccount(int account,string name,int SID,float balance,float interestRate,int period,int savingMonth);
    SavingBankAccount(const SavingBankAccount& other);
    void input();
    void output();
    void deposit();
    void withdraw();
    void withdrawImmediately();
    void checkBalance();
    void checkInterest();
};
#endif /* Function_h */
