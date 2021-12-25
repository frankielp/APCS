//
//  Function.cpp
//  Assignment01
//
//  Created by Le Pham Nhat Quynh on 10/12/21.
//

#include "Function.h"

Fraction::Fraction() {
    numerator = 1;
    denominator = 1;
}
Fraction::Fraction(int num,int dem)
{
        numerator=num;
        denominator=dem;
}
Fraction::~Fraction()
{
        numerator=0;
        denominator=0;
}
Fraction::Fraction(int num)
{
        numerator=num;
        denominator=1;
}
Fraction::Fraction(const Fraction& frac)
{
    numerator=frac.numerator;
    denominator=frac.denominator;
}
Fraction::Fraction(float num,float dem)
{
        numerator=(int)num;
        denominator=(int)dem;
}
void Fraction::Output() // Output
{
        cout << "Fraction = "<<numerator << "/" << denominator << endl;
}
