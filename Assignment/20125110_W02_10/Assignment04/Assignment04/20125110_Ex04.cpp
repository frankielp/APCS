//
//  main.cpp
//  Assignment04
//
//  Created by Le Pham Nhat Quynh on 10/25/21.
//

#include "Function.h"

int main() {
    Point2D O1(1,2);
    Circle c1;
    Circle c2(O1);
    Circle c3(3.4);
    Circle c4(O1,3.5);
    Circle c5(c4);
    cout<<"Circle 1\n";
    c1.output();
    cout<<"Circle 2\n";
    c2.output();
    cout<<"Circle 3\n";
    c3.output();
    cout<<"Circle 4\n";
    c4.output();
    cout<<"Circle 5\n";
    c5.output();
    return 0;
}
