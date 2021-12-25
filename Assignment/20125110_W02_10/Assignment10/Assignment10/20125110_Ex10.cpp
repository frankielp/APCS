//
//  main.cpp
//  Assignment10
//
//  Created by Le Pham Nhat Quynh on 10/25/21.
//

#include "Function.h"

int main() {
    int id=20125110;
    string fullname="Le Pham Nhat Quynh";
    string degree="BSc";
    Lecturer l1;
    Lecturer l2(id,fullname,degree,12);
    Lecturer l3(20125112,"Roseanne Park","PhD",11);
    Lecturer l4("20125000","Truong Thi Minh Khue","MSc","15");
    Lecturer l5(l3);
    cout<<"Lecturer 1\n";
    l1.output();
    cout<<"Lecturer 2\n";
    l2.output();
    cout<<"Lecturer 3\n";
    l3.output();
    cout<<"Lecturer 4\n";
    l4.output();
    cout<<"Lecturer 5\n";
    l5.output();
    return 0;
}
