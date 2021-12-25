//
//  Function.hpp
//  Assignment10
//
//  Created by Le Pham Nhat Quynh on 10/25/21.
//

#ifndef Function_hpp
#define Function_hpp

#include <iostream>
using namespace std;
class Lecturer
{
private:
    int id;
    string fullname;
    string degree;
    int courseTaken;
public:
    Lecturer();
    Lecturer(int ID, string Fullname, string Degree, int CourseTaken);
    Lecturer(string ID, string Fullname, string Degree, string CourseTaken);
    Lecturer(const Lecturer& other);
    Lecturer(int ID, string Fullname, string Degree);
    void output();
    ~Lecturer(){}
};

#endif /* Function_hpp */
