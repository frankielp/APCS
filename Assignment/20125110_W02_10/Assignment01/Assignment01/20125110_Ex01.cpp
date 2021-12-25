//
//  main.cpp
//  Assignment01
//
//  Created by Le Pham Nhat Quynh on 10/12/21.
//

#include "Function.h"

int main() {
    float num=3.1, dem=1.2;
    Fraction a;
    Fraction *b{new Fraction(4,16)};
    Fraction d(4);
    Fraction e(num,dem);
    Fraction c(d);
    cout<<"a ";
    a.Output();
    cout<<"b ";
    b->Output();
    cout<<"c ";
    c.Output();
    cout<<"d ";
    d.Output();
    cout<<"e ";
    e.Output();
    delete b;
    cout<<"b after delete ";
    b->Output();
    return 0;
}
