//
//  Function.hpp
//  Assignment09
//
//  Created by Le Pham Nhat Quynh on 10/25/21.
//

#ifndef Function_hpp
#define Function_hpp

#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    int id;
    char* fullname;
    char* address;
    double gpa;
public:
    Student();
    Student(int id,char* fullname,char* address, double gpa);
    Student(const Student& other);
    Student(int id,char* fullname,char* address);
    Student(string id,string fullname,string address,string gpa);
    ~Student();
    void output();
    
};

#endif /* Function_hpp */
