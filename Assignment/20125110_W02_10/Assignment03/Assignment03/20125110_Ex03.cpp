//
//  main.cpp
//  Assignment02
//
//  Created by Le Pham Nhat Quynh on 10/16/21.
//

#include "Function.h"

int main() {
    int ax=1,ay=1,bx=-1,by=-1,cx=1,cy=-1;
    float fax=1.1,fay=1.2,fbx=-1.1,fby=-1.2,fcx=1.1,fcy=-1.2;
    Point2D point1(1, 3);
    Point2D point2(2, 1);
    Point2D point3(1,4);
    Triangle triangle1(point1, point2, point3);
    Triangle triangle2;
    Triangle triangle3(ax,ay,bx,by,cx,cy);
    Triangle triangle4(triangle3);
    Triangle triangle5(fax,fay,fbx,fby,fcx,fcy);
    cout<<"Triangle 1 \n";
    triangle1.output();
    cout<<"Triangle 2 \n";
    triangle2.output();
    cout<<"Triangle 3 \n";
    triangle3.output();
    cout<<"Triangle 4 \n";
    triangle4.output();
    cout<<"Triangle 5 \n";
    triangle5.output();
    return 0;
}
