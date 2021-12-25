//
//  main.cpp
//  Assignment08
//
//  Created by Le Pham Nhat Quynh on 10/25/21.
//

#include "Function.h"

int main() {
    int m=5;
    int *b{new int[m]{1,3,5,7,2}};
    MyIntArray a1;
    MyIntArray a2(b,m);
    MyIntArray a3("12343224");
    MyIntArray a4(4);
    MyIntArray a5(a3);
    cout<<"Array 1\n";
    a1.output();
    cout<<"Array 2\n";
    a2.output();
    cout<<"Array 3\n";
    a3.output();
    cout<<"Array 4\n";
    a4.output();
    cout<<"Array 5\n";
    a5.output();
    return 0;
}
