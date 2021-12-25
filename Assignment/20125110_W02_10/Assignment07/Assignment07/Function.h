//
//  Function.hpp
//  Assignment07
//
//  Created by Le Pham Nhat Quynh on 10/25/21.
//

#ifndef Function_hpp
#define Function_hpp

#include <iostream>
using namespace std;
class ColorPixel
{
private:
    int r,g,b;
public:
    ColorPixel();
    ColorPixel(int R,int G,int B);
    ColorPixel(string R,string G,string B);
    ColorPixel(const ColorPixel& other);
    ColorPixel(int dec);
    void output();
    ~ColorPixel(){}
};

#endif /* Function_hpp */
