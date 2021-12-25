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
Triangle::Triangle(){
    A=Point2D(1,0);
    B=Point2D(0,0);
    C=Point2D(0,1);
}
Triangle::Triangle(Point2D X,Point2D Y,Point2D Z)
{
    A=X;
    B=Y;
    C=Z;
}
Triangle::Triangle(float ax,float ay,float bx,float by, float cx, float cy)
{
    A=Point2D(ax,ay);
    B=Point2D(bx,by);
    C=Point2D(cx,cy);
}
Triangle::Triangle(int ax,int ay,int bx, int by, int cx, int cy)
{
    A=Point2D(ax,ay);
    B=Point2D(bx,by);
    C=Point2D(cx,cy);
}
Triangle::Triangle(const Triangle& other)
{
    A=other.A;
    B=other.B;
    C=other.C;
}
void Triangle::output(){
    cout<<"1st vertex ";
    A.output();
    cout<<"2nd vertex ";
    B.output();
    cout<<"3rd vertex ";
    C.output();
}
Triangle::~Triangle()
{
    cout<<"deleted\n";
}
