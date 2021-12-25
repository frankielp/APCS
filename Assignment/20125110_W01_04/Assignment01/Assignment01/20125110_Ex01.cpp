//
//  main.cpp
//  Assignment01
//
//  Created by Le Pham Nhat Quynh on 10/12/21.
//

#include "Function.h"

int main() {
    Fraction a(1,2);
    Fraction b(4,16);
    Fraction d;
    Fraction e(0,5);
    Fraction c;
    c=a+b;
    c.Output();
    d=a/b;
    d.Output();
    return 0;
}
