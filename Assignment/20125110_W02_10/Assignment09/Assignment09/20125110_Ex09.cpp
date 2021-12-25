//
//  main.cpp
//  Assignment09
//
//  Created by Le Pham Nhat Quynh on 10/25/21.
//

#include "Function.h"

int main() {
    int id=20125110;
    string fn="Le Pham Nhat Quynh", ad="227 Nguyen Van Cu";
    char* fullname=new char[fn.length()];
    char* address=new char[ad.length()];
    for (int i=0;i<fn.length();i++)
    fullname[i]=fn[i];
    for (int i=0;i<ad.length();i++)
    address[i]=ad[i];
    string fn1="Truong", ad1="02 Tran Quy ";
    char* fullname1=new char[fn1.length()];
    char* address1=new char[ad1.length()];
    for (int i=0;i<fn1.length();i++)
    fullname1[i]=fn1[i];
    for (int i=0;i<ad1.length();i++)
    address1[i]=ad1[i];
    Student s1;
    Student s2(id,fullname,address,3.8);
    Student s3(id,fullname1,address1);
    Student s4("20125113","Roseanne Park","District 1","3.9");
    Student s5(s4);
    cout<<"Student 1\n";
    s1.output();
    cout<<"Student 2\n";
    s2.output();
    cout<<"Student 3\n";
    s3.output();
    cout<<"Student 4\n";
    s4.output();
    cout<<"Student 5\n";
    s5.output();
    
    return 0;
}
