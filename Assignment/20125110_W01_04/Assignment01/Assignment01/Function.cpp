//
//  Function.cpp
//  Assignment01
//
//  Created by Le Pham Nhat Quynh on 10/12/21.
//

#include "Function.h"
int gcd(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
Fraction::Fraction() {
    numerator = 1;
    denominator = 1;
}
Fraction::Fraction(int num,int dem)
{
        numerator=num;
        denominator=dem;
}
void Fraction::Input()//Input
{
    int n,d;
    cout<<"Type numerator"<<endl;
    cin>>n;
    cout<<"Type denominator"<<endl;
    cin>>d;
    if (d!=0)
    {
        numerator=n;
        denominator=d;
    }
    else cout<<"Invalid fraction\n";
}
void Fraction::Output() // Output
{
    if (denominator == 1) // e.g. fraction 2/1 will display simply as 2
        cout << "Fraction = "<<numerator << endl;
    else
        cout << "Fraction = "<<numerator << "/" << denominator << endl;
}
Fraction Fraction::Sum(Fraction frac)
{
    int n = numerator*frac.denominator+frac.numerator*denominator;
    int d = denominator*frac.denominator;
    return Fraction(n/gcd(n,d),d/gcd(n,d));
}
Fraction Fraction::Subtract(Fraction frac)
{
    int n = numerator*frac.denominator-frac.numerator*denominator;
    int d = denominator*frac.denominator;
    return Fraction(n/gcd(n,d),d/gcd(n,d));
}
Fraction Fraction::Multiply(Fraction frac)
{
    int n = numerator*frac.numerator;
    int d = denominator*frac.denominator;
    return Fraction(n/gcd(n,d),d/gcd(n,d));
}
Fraction Fraction::Divide(Fraction frac)
{
    if (frac.denominator==0)
    {
        cout<<"Invalid operation"<<endl;
        return Fraction(numerator,denominator); //return original Fraction
    }
    int n = numerator*frac.denominator;
    int d = denominator*frac.numerator;
    return Fraction(n/gcd(n,d),d/gcd(n,d));
}
Fraction Fraction::Reduce()
{
    int n = numerator;
    int d = denominator;
    return Fraction(n/gcd(n,d),d/gcd(n,d));
}
int Fraction::Compare(Fraction frac)
{
    int diff = numerator*frac.denominator-frac.numerator*denominator;
    if (diff>0) return 1;
    else if (diff==0) return 0;
    else return -1;
}
bool Fraction::isPositive()
{
    return (numerator>0&&denominator>0)||(numerator<0&&denominator<0);
}
bool Fraction::isNegative()
{
    return (numerator<0&&denominator>0)||(numerator>0&&denominator<0);
}
bool Fraction::isZero()
{
    return (numerator==0&&denominator!=0);
}
Fraction Fraction::operator+(Fraction other)
{
    return Sum(other);
}
Fraction Fraction::operator/(Fraction other)
{
    return Divide(other);
}
