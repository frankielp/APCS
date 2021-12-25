//
//  Function.cpp
//  Assignment06
//
//  Created by Le Pham Nhat Quynh on 10/25/21.
//

#include "Function.h"
MyTime::MyTime()
{
    h=m=s=0;
}
MyTime::MyTime(int H, int M, int S)
{
    h=H;
    m=M;
    s=S;
}
MyTime::MyTime(string H,string M,string S)
{
    h=stoi(H);
    m=stoi(M);
    s=stoi(S);
}
MyTime::MyTime(const MyTime& other)
{
    h=other.h;
    m=other.m;
    s=other.s;
}
MyTime::MyTime(int second)
{
    h=second/3600;
    m=(second%3600)/60;
    s=(second%3600)%60;
}
void MyTime::output()
{
    cout<<h<<":"<<m<<":"<<s<<endl;
}
