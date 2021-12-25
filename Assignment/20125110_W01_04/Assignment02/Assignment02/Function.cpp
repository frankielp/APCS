//
//  Function.cpp
//  Assignment02
//
//  Created by Le Pham Nhat Quynh on 10/16/21.
//

#include "Function.h"
Point::Point(){
    x=0;
    y=0;
}
Point::Point(float X, float Y){
    x=X;
    y=Y;
}
void Point::input(){
    float X,Y;
    cout<<"Type x-coordinate: "<<endl;
    cin>>X;
    cout<<"Type y-coordinate: "<<endl;
    cin>>Y;
    x=X;
    y=Y;
}
float Point::getX(){
    return x;
}
float Point::getY(){
    return y;
}
void Point::output()
{
    cout<<"Coordinate: ("<<x<<", "<<y<<")"<<endl;
}
float Point::distance(Point B)
{
    return sqrt(pow(abs(x-B.x),2)+pow(abs(y-B.y),2));
}
float Point::distanceOx()
{
    return abs(x);
}
float Point::distanceOy()
{
    return abs(y);
}
Triangle::Triangle(){
    A=Point();
    B=Point();
    C=Point();
}
Triangle::Triangle(Point X,Point Y,Point Z)
{
    A=X;
    B=Y;
    C=Z;
}
void Triangle::input()
{
    cout<<"Type coodinate of 1st vertex "<<endl;
    A=Point();
    A.input();
    cout<<"Type coodinate of 2nd vertex "<<endl;
    B=Point();
    B.input();
    cout<<"Type coodinate of 3rd vertex "<<endl;
    C=Point();
    C.input();
}
void Triangle::output(){
    cout<<"1st vertex ";
    A.output();
}
bool Triangle::isValid(){
    float a=A.distance(B);
    float b=C.distance(B);
    float c=A.distance(C);
    return !(a < 0 || b < 0 || c < 0 ||
            (a + b <= c) || a + c <= b ||b + c <= a);
}
void Triangle::type(){
    float a=A.distance(B);
    float b=C.distance(B);
    float c=A.distance(C);
    if(a==b && b==c)
       cout << "Equilateral triangle\n";
    else if(a*a==b*b+c*c ||b*b==c*c+a*a || c*c==a*a+b*b)
        cout << "Right-angled triangle\n";
    // at least 2 sides equal
    else if(a==b || a==c || b==c)

       cout << "Isosceles triangle\n";
    // no sides equal
    else
       cout << "Scalene triangle\n";
}
float Triangle::perimeter()
{
    float a=A.distance(B);
    float b=C.distance(B);
    float c=A.distance(C);
    return a+b+c;
}
float Triangle::area()
{
    float a=A.distance(B);
    float b=C.distance(B);
    float c=A.distance(C);
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) *(s - b) * (s - c));
}
Point Triangle::centerG()
{
    float X=(A.getX()+B.getX()+C.getX())/3;
    float Y=(A.getY()+B.getY()+C.getY())/3;
    return Point(X,Y);
}
