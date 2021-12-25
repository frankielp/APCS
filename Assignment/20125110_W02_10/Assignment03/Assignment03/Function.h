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
class Triangle {
private:
    Point2D A,B,C;
public:
    Triangle();
    Triangle(Point2D X,Point2D Y,Point2D Z);
    Triangle(float ax,float ay,float bx,float by, float cx, float cy);
    Triangle(int ax,int ay,int bx, int by, int cx, int cy);
    Triangle(const Triangle& other);
    void output();
    ~Triangle();
};
#endif /* Function_hpp */
