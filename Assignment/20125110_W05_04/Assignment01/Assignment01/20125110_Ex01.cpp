//
//  main.cpp
//  Assignment01
//
//  Created by Le Pham Nhat Quynh on 11/2/21.
//

#include "Function.h"

int main() {
    Worker w1;
    w1.input();
    w1.output();
    cout<<"Salary: "<<w1.salary()<<endl;
    OfficeEmployee w2;
    w2.input();
    w2.output();
    cout<<"Salary: "<<w2.salary()<<endl;
    Worker w3(20125110,"Quynh","21/11/2021","227 Nguyen Van Cu",300,25);
    Worker w4(20125110,"Quynh","21/11/2021","227 Nguyen Van Cu",300);
    Worker w5(20125110,"Quynh","21/11/2021","227 Nguyen Van Cu");
    Worker w6(20125110,"Quynh","21/11/2021");
    Worker w7(20125110,"Quynh");
    w3.output();
    w4.output();
    w5.output();
    w6.output();
    w7.output();
    OfficeEmployee o3(20125110,"Tan","21/11/2021","227 Nguyen Van Cu",300,25);
    OfficeEmployee o4(20125110,"Tan","21/11/2021","227 Nguyen Van Cu",300);
    OfficeEmployee o5(20125110,"Tan","21/11/2021","227 Nguyen Van Cu");
    OfficeEmployee o6(20125110,"Tan","21/11/2021");
    OfficeEmployee o7(20125110,"Tan");
    o3.output();
    o4.output();
    o5.output();
    o6.output();
    o7.output();
    cout<<"Company section: \n";
    Company yg;
    yg.input();
    yg.output();
    cout<<"Total salary: "<<yg.totalSalary()<<endl;
    yg.printMaxSalary();
    return 0;
}
