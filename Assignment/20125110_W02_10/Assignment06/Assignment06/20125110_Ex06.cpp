//
//  main.cpp
//  Assignment05
//
//  Created by Le Pham Nhat Quynh on 10/25/21.
//

#include "Function.h"

int main() {
    MyTime d1;
    MyTime d2(1,2,13);
    MyTime d3("30","12","2");
    MyTime d4(2048);
    MyTime d5(d4);
    cout<<"Time 1\n";
    d1.output();
    cout<<"Time 2\n";
    d2.output();
    cout<<"Time 3\n";
    d3.output();
    cout<<"Time 4\n";
    d4.output();
    cout<<"Time 5\n";
    d5.output();
    return 0;
}
