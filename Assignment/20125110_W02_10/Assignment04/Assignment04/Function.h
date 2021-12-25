//
//  Function.hpp
//  Assignment02
//
//  Created by Le Pham Nhat Quynh on 10/16/21.
//

#ifndef Function_h
#define Function_h

#include <iostream>
using namespace std;
class Point2D {
private:
    float x,y;
public:
    Point2D();
    Point2D(float X, float Y);
    Point2D(int X, int Y);
    void output();
    ~Point2D();
};
class Circle{
private:
    Point2D O;
    float r;
public:
    Circle();
    Circle(const Circle& other);
    Circle(float radius);
    Circle(Point2D center, float radius);
    Circle(Point2D center);
    ~Circle();
    void output();
};
#endif /* Function_hpp */
