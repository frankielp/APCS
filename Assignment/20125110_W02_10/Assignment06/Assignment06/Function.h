//
//  Function.hpp
//  Assignment05
//
//  Created by Le Pham Nhat Quynh on 10/25/21.
//

#ifndef Function_hpp
#define Function_hpp

#include <iostream>
#include <stdio.h>
using namespace std;
class MyTime
{
private:
    int h,m,s;
public:
    MyTime();
    ~MyTime(){};
    MyTime(int H, int M, int S);
    MyTime(string H,string M,string S);
    MyTime(const MyTime& other);
    MyTime(int second);
    void output();
};
#endif /* Function_hpp */
