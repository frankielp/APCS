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
    Point2D(string X,string Y);
    Point2D(int X, int Y);
    Point2D(const Point2D& other);
    ~Point2D();
    void output();
};
#endif /* Function_hpp */
