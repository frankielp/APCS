//
//  Function.cpp
//  Assignment02
//
//  Created by Le Pham Nhat Quynh on 10/16/21.
//

#include "Function.h"
Point2D::Point2D(){
    x=0;
    y=0;
}
Point2D::Point2D(float X, float Y)
{
    x=X;
    y=Y;
}
void Point2D::output()
{
    cout<<"Coordinate: ("<<x<<", "<<y<<")"<<endl;
}
Point2D::Point2D(string X,string Y)
{
    x=stof(X);
    y=stof(Y);
}
Point2D::Point2D(int X, int Y)
{
    x=(float)X;
    y=(float)Y;
}
Point2D::Point2D(const Point2D& other)
{
    x=other.x;
    y=other.y;
}
Point2D::~Point2D()
{
    x=0;
    y=0;
    cout<<"deleted"<<endl;
}
