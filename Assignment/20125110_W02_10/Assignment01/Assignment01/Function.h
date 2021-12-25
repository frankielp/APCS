//
//  Function.hpp
//  Assignment01
//
//  Created by Le Pham Nhat Quynh on 10/12/21.
//

#ifndef Function_h
#define Function_h

#include <iostream>
using namespace std;
int gcd(int a, int b);
class Fraction{
private:
    int numerator,denominator;
public:
    Fraction();
    Fraction(int num,int dem);
    Fraction(int num);
    Fraction(const Fraction& frac);
    Fraction(float val);
    Fraction(float num,float dem);
    ~Fraction();
    void Output();
};
#endif /* Function_hpp */
