//
//  main.cpp
//  Assignment02
//
//  Created by Le Pham Nhat Quynh on 10/16/21.
//

#include "Function.h"

int main() {
    Point point1(1, 3);
    Point point2(2, 1);
    Point point3;
    cout<<"Type point 3 \n";
    point3.input();
    point3.output();
    Triangle triangle1(point1, point2, point3);
    Triangle triangle2;
    cout<<"Type triangle 2 \n";
    triangle2.input();
    cout << triangle1.perimeter() << endl;
    cout << triangle2.area() << endl;
    triangle1.centerG().output();
    return 0;
}
