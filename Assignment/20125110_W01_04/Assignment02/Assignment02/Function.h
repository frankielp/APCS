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
class Point {
private:
    float x,y;
public:
    Point();
    Point(float X, float Y);
    float getX();
    float getY();
    void input();
    void output();
    float distance(Point B);
    float distanceOx();
    float distanceOy();
};
class Triangle {
private:
    Point A,B,C;
public:
    Triangle();
    Triangle(Point X,Point Y,Point Z);
    void input();
    void output();
    bool isValid();
    void type();
    float perimeter();
    float area();
    Point centerG();
};
#endif /* Function_hpp */
