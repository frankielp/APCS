//
//  Function.cpp
//  Assignment05
//
//  Created by Le Pham Nhat Quynh on 10/25/21.
//

#include "Function.h"
MyDate::MyDate()
{
    d=m=y=0;
}
MyDate::MyDate(int D, int M, int Y)
{
    d=D;
    m=M;
    y=Y;
}
MyDate::MyDate(string D,string M,string Y)
{
    d=stoi(D);
    m=stoi(M);
    y=stoi(Y);
}
MyDate::MyDate(const MyDate& other)
{
    d=other.d;
    m=other.m;
    y=other.y;
}
MyDate::MyDate(string date)
{
    d=(date[0]-'0')*10+(date[1]-'0');
    m=(date[3]-'0')*10+(date[4]-'0');
    y=(date[6]-'0')*1000+(date[7]-'0')*100+(date[8]-'0')*10+(date[9]-'0');
}
void MyDate::output()
{
    cout<<d<<"/"<<m<<"/"<<y<<endl;
}
