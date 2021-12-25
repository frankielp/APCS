//
//  Function.hpp
//  Assignment05
//
//  Created by Le Pham Nhat Quynh on 10/25/21.
//

#ifndef Function_hpp
#define Function_hpp

#include <iostream>
using namespace std;
class MyDate
{
private:
    int d,m,y;
public:
    MyDate();
    ~MyDate(){};
    MyDate(int D, int M, int Y);
    MyDate(string D,string M,string Y);
    MyDate(const MyDate& other);
    MyDate(string date);
    void output();
};
#endif /* Function_hpp */
