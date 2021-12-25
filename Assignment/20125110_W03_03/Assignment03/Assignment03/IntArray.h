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
class IntArray
{
private:
    int*a, n;
public:
    IntArray();
    IntArray(int*A,int N);
    IntArray(int N);
    IntArray(const IntArray& other);
    ~IntArray();
    void output();
    IntArray& operator=(IntArray other);
    friend istream& operator>>(istream &in,IntArray& x);
    friend ostream& operator<<(ostream &out,IntArray x);
    int& operator[] (int i);
    operator int() const;
};
#endif /* Function_hpp */
