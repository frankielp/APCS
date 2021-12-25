//
//  main.cpp
//  Assignment07
//
//  Created by Le Pham Nhat Quynh on 10/25/21.
//

#include "Function.h"

int main() {
    ColorPixel c1;
    ColorPixel c2(255,0,255);
    ColorPixel c3(333333);
    ColorPixel c4("255","0","0");
    ColorPixel c5(c3);
    cout<<"Color pixel 1\n";
    c1.output();
    cout<<"Color pixel 2\n";
    c2.output();
    cout<<"Color pixel 3\n";
    c3.output();
    cout<<"Color pixel 4\n";
    c4.output();
    cout<<"Color pixel 5\n";
    c5.output();
    return 0;
}
