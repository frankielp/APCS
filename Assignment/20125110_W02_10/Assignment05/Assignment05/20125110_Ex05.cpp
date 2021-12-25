//
//  main.cpp
//  Assignment05
//
//  Created by Le Pham Nhat Quynh on 10/25/21.
//

#include "Function.h"

int main() {
    MyDate d1;
    MyDate d2(1,2,2012);
    MyDate d3("30","12","2002");
    MyDate d4("12-10-2002");
    MyDate d5(d4);
    cout<<"Date 1\n";
    d1.output();
    cout<<"Date 2\n";
    d2.output();
    cout<<"Date 3\n";
    d3.output();
    cout<<"Date 4\n";
    d4.output();
    cout<<"Date 5\n";
    d5.output();
    return 0;
}
