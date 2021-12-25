//
//  Function.cpp
//  Assignment07
//
//  Created by Le Pham Nhat Quynh on 10/25/21.
//

#include "Function.h"
ColorPixel::ColorPixel()
{
    r=b=g=0;
}
ColorPixel::ColorPixel(int R,int G,int B)
{
    r=R;
    g=G;
    b=B;
}
ColorPixel::ColorPixel(string R,string G,string B)
{
    r=stoi(R);
    g=stoi(G);
    b=stoi(B);
}
ColorPixel::ColorPixel(const ColorPixel& other)
{
    r=other.r;
    b=other.b;
    g=other.g;
}
ColorPixel::ColorPixel(int dec)
{
    b = dec % 256;
    g = ((dec-b)/256) % 256;
    r = ((dec-b)/pow(256,2)) - g/256;
}
void ColorPixel::output()
{
    cout<<"("<<r<<","<<g<<","<<b<<")"<<endl;
}
