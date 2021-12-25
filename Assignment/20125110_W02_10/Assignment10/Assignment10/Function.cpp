//
//  Function.cpp
//  Assignment10
//
//  Created by Le Pham Nhat Quynh on 10/25/21.
//

#include "Function.h"
Lecturer::Lecturer(){
    id=0;
    fullname="None";
    degree="None";
    courseTaken=-1;
}
Lecturer::Lecturer(int ID, string Fullname, string Degree, int CourseTaken){
    id=ID;
    fullname=Fullname;
    degree=Degree;
    courseTaken=CourseTaken;
    
}
Lecturer::Lecturer(const Lecturer& other){
    id=other.id;
    fullname=other.fullname;
    degree=other.degree;
    courseTaken=other.courseTaken;
}
Lecturer::Lecturer(int ID, string Fullname, string Degree){
    id=ID;
    fullname=Fullname;
    degree=Degree;
    courseTaken=0;
}
void Lecturer::output(){
    cout<<"ID: "<<id<<endl;
    cout<<"Full name: "<<fullname<<endl;
    cout<<"Degree: "<<degree<<endl;
    cout<<"number of taken courses: "<<courseTaken<<endl;
}
Lecturer::Lecturer(string ID, string Fullname, string Degree, string CourseTaken){
    id=stoi(ID);
    fullname=Fullname;
    degree=Degree;
    courseTaken=stoi(CourseTaken);
}

