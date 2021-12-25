//
//  Function.cpp
//  Assignment05
//
//  Created by Le Pham Nhat Quynh on 10/25/21.
//

#include "Date.h"
Date::Date()
{
    const int MAXLEN = 80;
    char s[MAXLEN];
    time_t t = time(0);
    strftime(s, MAXLEN, "%d/%m/%Y", localtime(&t));
    Date tmp(s);
    d=tmp.d;
    m=tmp.m;
    y=tmp.y;
}
Date::Date(int Y, int M, int D)
{
    d=D;
    m=M;
    y=Y;
}
Date::Date(int Y, int M)
{
    d=1;
    m=M;
    y=Y;
}
Date::Date(int Y)
{
    d=1;
    m=1;
    y=Y;
}
Date::Date(string D,string M,string Y)
{
    d=stoi(D);
    m=stoi(M);
    y=stoi(Y);
}
Date::Date(const Date& other)
{
    d=other.d;
    m=other.m;
    y=other.y;
}
Date::Date(string date)
{
    d=(date[0]-'0')*10+(date[1]-'0');
    m=(date[3]-'0')*10+(date[4]-'0');
    y=(date[6]-'0')*1000+(date[7]-'0')*100+(date[8]-'0')*10+(date[9]-'0');
}
void Date::output()
{
    cout<<d<<"/"<<m<<"/"<<y<<endl;
}
Date& Date::operator=(Date other){
    swap(d, other.d);
    swap(m, other.m);
    swap(y, other.y);
    return *this;
}
ostream& operator<<(ostream &out,Date x){
    out<<x.d<<"/"<<x.m<<"/"<<x.y;
    return out;
}
Date Date::Tomorrow(){
    Date tmp(*this);
    if (tmp.d == 31 && (tmp.m == 1 || tmp.m == 3 || tmp.m == 5 || tmp.m == 7 || tmp.m == 8 || tmp.m == 10 || tmp.m == 12))
        {
            if (tmp.m == 12)
            {
                tmp.d = 1;
                tmp.y = tmp.y + 1;
            }
            else
            {
                tmp.d = 1;
                tmp.m = tmp.m + 1;
            }
        }
        if (tmp.d == 30 && (tmp.m == 4|| tmp.m == 6 || tmp.m == 9 || tmp.m == 11))
        {
            tmp.d = 1;
            tmp.m = tmp.m + 1;
        }
        if (tmp.d == 28 && tmp.m == 2)
        {
            tmp.d = 1;
            tmp.m = tmp.m + 1;
        }
        else
        {
            tmp.d = tmp.d + 1;
        }
    return tmp;
}
Date Date::Yesterday(){
    Date tmp(*this);
    if(tmp.d==1)
        {
            if(tmp.m==4|| tmp.m==6|| tmp.m==9|| tmp.m==11)
            {
                tmp.d=31;
                tmp.m = tmp.m -1;
            }
            else if(tmp.m==3)
            {
                if(tmp.y%4==0)
                    tmp.d=29;
                else
                    tmp.d=28;
                
                tmp.m = tmp.m -1;
            }
            else if(tmp.m==1)
            {
                tmp.d=31;
                tmp.m = 12;
                tmp.y = tmp.y - 1 ;
            }
            else if(tmp.m==2)
            {
                tmp.d=31;
                tmp.m = tmp.m -1;
            }
            else
            {
                tmp.d=30;
                tmp.m = tmp.m -1;
            }
        }
        else
        {
            tmp.d = tmp.d-1;
        }
    return tmp;
}
bool Date::operator>(const Date &x){
    return (y>x.y)||((y==x.y)&&(m>x.m)) || ((y==x.y)&&(m==x.m)&&(d>x.d));
}
bool Date::operator<(const Date &x){
    return !(*this==x||*this>x);
}
bool Date::operator==(const Date &x){
    return (d==x.d)&&(m==x.m)&&(y==x.y);
}
bool Date::operator!=(const Date &x){
    return !(*this==x);
}
bool Date::operator>=(const Date &x){
    return (*this==x)||(*this>x);
}
bool Date::operator<=(const Date &x){
    return (*this<x)||(*this==x);
}
Date Date::operator+(int x){
    Date tmp(*this);
    while(x--)
    {
        tmp=tmp.Tomorrow();
    }
    return tmp;
}
Date Date::operator-(int x){
    Date tmp(*this);
    while(x--)
    {
        tmp=tmp.Yesterday();
    }
    return tmp;
}
Date& Date::operator++(){
    Date tmp(this->Tomorrow());
    d=tmp.d;
    m=tmp.m;
    y=tmp.y;
    return *this;
}
Date Date::operator++(int){ //post
    Date ans(*this);
    Date tmp=ans.Tomorrow();
    d=tmp.d;
    m=tmp.m;
    y=tmp.y;
    return ans;
}
Date& Date::operator--(){
    Date tmp(this->Yesterday());
    d=tmp.d;
    m=tmp.m;
    y=tmp.y;
    return *this;
}
Date Date::operator--(int){ //post
    Date ans(*this);
    Date tmp=ans.Yesterday();
    d=tmp.d;
    m=tmp.m;
    y=tmp.y;
    return ans;
}
istream& operator>>(istream &in,Date& x){
    int day, month, year;
    char ch1, ch2;
    if (in >> day >> ch1 >> month >> ch2 >> year)
    {
        if (ch1 == '/' && ch2 == '/')
            x = Date(year, month, day);
        else
            in.setstate(ios::failbit);
    }
    return in;
}
Date::operator int() const{
    const Date tmp1(y,1,1);
    const Date tmp2(*this);
    return (int)dayGap(tmp1,tmp2);
}
Date::operator long() const{
    const Date tmp1(1,1,1);
    const Date tmp2(*this);
    return dayGap(tmp1,tmp2);
}

int leapYear(Date d)
{
    int years = d.y;
    if (d.m <= 2)
        years--;
    return years / 4 - years / 100 + years / 400;
}
long dayGap(Date d1, Date d2)
{
    long n1 = d1.y * 365 + d1.d;
    for (int i = 0; i < d1.m - 1;i++)
        n1 += months[i];
    n1 += leapYear(d1);
    long n2 = d2.y * 365 + d2.d;
    for (int i = 0; i < d2.m - 1; i++)
        n2 += months[i];
    n2 += leapYear(d2);
    return (n2 - n1);
}
Date& Date::operator+=(int other)
{
    Date tmp=*this+other;
    swap(this->d,tmp.d);
    swap(this->m,tmp.m);
    swap(this->y,tmp.y);
    return *this;
}
Date& Date::operator-=(int other)
{
    Date tmp=*this-other;
    swap(this->d,tmp.d);
    swap(this->m,tmp.m);
    swap(this->y,tmp.y);
    return *this;
}
