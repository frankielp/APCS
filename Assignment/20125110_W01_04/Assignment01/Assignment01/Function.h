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
    void Input();
    void Output();
    Fraction Sum(Fraction frac);
    Fraction Subtract(Fraction frac);
    Fraction Multiply(Fraction frac);
    Fraction Divide(Fraction frac);
    Fraction Reduce();
    Fraction operator+(Fraction other);
    Fraction operator/(Fraction other);
    int Compare(Fraction frac);
    bool isPositive();
    bool isNegative();
    bool isZero();
};
#endif /* Function_hpp */
