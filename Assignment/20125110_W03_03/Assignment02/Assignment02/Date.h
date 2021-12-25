//
//  Function.hpp
//  Assignment05
//
//  Created by Le Pham Nhat Quynh on 10/25/21.
//

#ifndef Date_hpp
#define Date_hpp

#include <iostream>
#include <ctime>
using namespace std;
const int months[12]
    = { 31, 28, 31, 30, 31, 30,
       31, 31, 30, 31, 30, 31 };
class Date
{
private:
    int d,m,y;
public:
    Date();
    ~Date(){};
    Date(int Y, int M, int D);
    Date(int Y, int M);
    Date(int Y);
    Date(string D,string M,string Y);
    Date(const Date& other);
    Date(string date);
    void output();
    Date& operator=(Date other);
    friend ostream& operator<<(ostream &out,Date x);
    friend istream& operator>>(istream &in,Date& x);
    Date Tomorrow();
    Date Yesterday();
    bool operator>(const Date &x);
    bool operator<(const Date &x);
    bool operator==(const Date &x);
    bool operator!=(const Date &x);
    bool operator>=(const Date &x);
    bool operator<=(const Date &x);
    Date operator+(int x);
    Date operator-(int x);
    Date& operator++();
    Date operator++(int);
    Date& operator--();
    Date operator--(int);
    operator int() const;
    operator long() const;
    friend int leapYear(Date d);
    friend long dayGap(Date d1, Date d2);
    Date& operator+=(int other);
    Date& operator-=(int other);
};
#endif /* Date_hpp */
