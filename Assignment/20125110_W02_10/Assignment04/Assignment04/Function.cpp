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
Point2D::Point2D(float X, float Y){
    x=X;
    y=Y;
}
Point2D::Point2D(int X, int Y){
    x=(float)X;
    y=(float)Y;
}
Point2D::~Point2D()
{
    return;
}
void Point2D::output()
{
    cout<<"Coordinate: ("<<x<<", "<<y<<")"<<endl;
}
Circle::Circle()
{
    O=Point2D();
    r=0;
}
Circle::Circle(const Circle& other)
{
    O=other.O;
    r=other.r;
}
Circle::Circle(float radius)
{
    O=Point2D();
    r=radius;
}
Circle::Circle(Point2D center, float radius)
{
    O=center;
    r=radius;
}
Circle::Circle(Point2D center)
{
    O=center;
    r=1;
}
Circle::~Circle()
{
    cout<<"deleted\n";
}
void Circle::output()
{
    O.output();
    cout<<"Radius = "<<r<<endl;
}
