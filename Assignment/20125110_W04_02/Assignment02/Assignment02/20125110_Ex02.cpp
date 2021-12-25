//
//  main.cpp
//  Assignment02
//
//  Created by Le Pham Nhat Quynh on 11/4/21.
//

#include "Function.h"

int main() {
    BankAccount b1;
    b1.input();
    b1.output();
    b1.deposit();
    b1.withdraw();
    b1.checkBalance();
    SavingBankAccount s1;
    s1.input();
    s1.output();
    s1.deposit();
    s1.withdraw();
    s1.withdrawImmediately();
    s1.checkBalance();
    s1.checkInterest();
    return 0;
}
