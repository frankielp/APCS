//
//  Function.cpp
//  Assignment01
//
//  Created by Le Pham Nhat Quynh on 10/12/21.
//

#include "Fraction.h"
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
    numerator = 0;
    denominator = 1;
}
Fraction::Fraction(int num,int dem)
{
    if (dem<0)
    {
        numerator=-num;
        denominator=-dem;
    }
    else
    {
        numerator=num;
        denominator=dem;
    }
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
    //return Fraction(n/__gcd(n,d),d/__gcd(n,d));
    return Fraction(n,d);

}
Fraction Fraction::Subtract(Fraction frac)
{
    int n = numerator*frac.denominator-frac.numerator*denominator;
    int d = denominator*frac.denominator;
    //return Fraction(n/gcd(n,d),d/gcd(n,d));
    return Fraction(n,d);
}
Fraction Fraction::Multiply(Fraction frac)
{
    int n = numerator*frac.numerator;
    int d = denominator*frac.denominator;
    //return Fraction(n/gcd(n,d),d/gcd(n,d));
    return Fraction(n,d);
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
    //return Fraction(n/gcd(n,d),d/gcd(n,d));
    return Fraction(n,d);
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
Fraction Fraction::operator-(Fraction other)
{
    return Subtract(other);
}
Fraction Fraction::operator*(Fraction other)
{
    return Multiply(other);
}
Fraction& Fraction::operator=(Fraction other)
{
    swap(numerator,other.numerator);
    swap(denominator,other.denominator);
    return *this;
}
Fraction::Fraction(const Fraction& other)
{
    numerator=other.numerator;
    denominator=other.denominator;
}
int Fraction::getNum()
{
    return numerator;
}
int Fraction::getDem()
{
    return denominator;
}
ostream& operator<<(ostream& out, Fraction x) {
    out << x.numerator<< " / " << x.denominator;
    return out;
}
Fraction Fraction::operator+()
{
    return *this;
}
Fraction Fraction::operator-()
{
    Fraction tmp=*this;
    tmp.numerator=-tmp.numerator;
    return tmp;
}
bool Fraction::operator>(const Fraction &x)
{
    Fraction tmp=*this-x;
    return (tmp.numerator>0&&tmp.denominator>0)||(tmp.numerator<0&&tmp.denominator<0);
}
bool Fraction::operator<(const Fraction &x)
{
    Fraction tmp=*this-x;
    return (tmp.numerator>0&&tmp.denominator<0)||(tmp.numerator<0&&tmp.denominator>0);
}
bool Fraction::operator==(const Fraction &x)
{
    return !(*this!=x);
}
bool Fraction::operator!=(const Fraction &x)
{
    return *this>x || *this<x;
}
bool Fraction::operator>=(const Fraction &x)
{
    return *this>x||*this==x;
}
bool Fraction::operator<=(const Fraction &x)
{
    return *this<x||*this==x;
}
Fraction& Fraction::operator++()    // pre-fix increment
{
    numerator+=denominator;
    return *this;
}

Fraction Fraction::operator++(int)    // post-fix increment
{
    Fraction temp = *this;
    numerator+=denominator;
    return temp;
}

Fraction& Fraction::operator--()    // pre-fix increment
{
    numerator-=denominator;
    return *this;
}

Fraction Fraction::operator--(int)    // post-fix increment
{
    Fraction temp = *this;
    numerator-=denominator;
    return temp;
}
Fraction::operator float() const
{
    return (float)numerator/(float)denominator;
}
Fraction Fraction::operator+(int x){
    Fraction tmp(x,1);
    return Sum(tmp);
}
Fraction Fraction::operator/(int x){
    Fraction tmp(x,1);
    return Divide(tmp);
}
Fraction Fraction::operator-(int x){
    Fraction tmp(x,1);
    return Subtract(tmp);
}
Fraction Fraction::operator*(int x){
    Fraction tmp(x,1);
    return Multiply(tmp);
}
Fraction operator+(int x,Fraction other){
    Fraction tmp(x,1);
    return other.Sum(tmp);
}
Fraction operator-(int x,Fraction other){
    Fraction tmp(x,1);
    return other.Subtract(tmp);
}
Fraction operator*(int x,Fraction other){
    Fraction tmp(x,1);
    return other.Multiply(tmp);
}
Fraction operator/(int x,Fraction other){
    Fraction tmp(x,1);
    return other.Divide(tmp);
}
Fraction& Fraction::operator+=(Fraction other)
{
    Fraction tmp=Sum(other);
    swap(this->numerator,tmp.numerator);
    swap(this->denominator,tmp.denominator);
    return *this;
}
Fraction& Fraction::operator/=(Fraction other){
    Fraction tmp=Divide(other);
    swap(this->numerator,tmp.numerator);
    swap(this->denominator,tmp.denominator);
    return *this;
}
Fraction& Fraction::operator-=(Fraction other){
    Fraction tmp=Subtract(other);
    swap(this->numerator,tmp.numerator);
    swap(this->denominator,tmp.denominator);
    return *this;
}
Fraction& Fraction::operator*=(Fraction other){
    Fraction tmp=Multiply(other);
    swap(this->numerator,tmp.numerator);
    swap(this->denominator,tmp.denominator);
    return *this;
}
