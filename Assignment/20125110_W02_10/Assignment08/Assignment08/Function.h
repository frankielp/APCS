//
//  Function.hpp
//  Assignment08
//
//  Created by Le Pham Nhat Quynh on 10/25/21.
//

#ifndef Function_hpp
#define Function_hpp

#include <iostream>
using namespace std;
class MyIntArray
{
private:
    int*a, n;
public:
    MyIntArray();
    MyIntArray(int*A,int N);
    MyIntArray(string s);
    MyIntArray(int N);
    MyIntArray(const MyIntArray& other);
    ~MyIntArray();
    void output();
};
#endif /* Function_hpp */
