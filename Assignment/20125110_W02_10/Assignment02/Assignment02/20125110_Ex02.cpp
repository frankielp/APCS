//
//  main.cpp
//  Assignment02
//
//  Created by Le Pham Nhat Quynh on 10/16/21.
//

#include "Function.h"

int main() {
    float a=2.1, b=1.3;
    Point2D point1(1, 3);
    Point2D point2(a,b);
    Point2D point3("1","3.4");
    Point2D point4(point3);
    Point2D point5;
    cout<<"Point 1\n";
    point1.output();
    cout<<"Point 2\n";
    point2.output();
    cout<<"Point 3\n";
    point3.output();
    cout<<"Point 4\n";
    point4.output();
    cout<<"Point 5\n";
    point5.output();
    return 0;
}
