//
//  Function.cpp
//  Assignment09
//
//  Created by Le Pham Nhat Quynh on 10/25/21.
//

#include "Function.h"
Student::Student(){
    id=0;
    fullname=nullptr;
    address=nullptr;
    gpa=-1;
}
Student::Student(int id,char* fullname,char* address, double gpa){
    this->id=id;
    this->fullname=fullname;
    this->address=address;
    this->gpa=gpa;
}
Student::Student(const Student& other){
    id=other.id;
    fullname=(char *)malloc(strlen(other.fullname)+1);
    strcpy(fullname, other.fullname);
    address=(char *)malloc(strlen(other.address)+1);
    strcpy(address, other.address);
    gpa=other.gpa;
}
Student::Student(int id,char* fullname,char* address){
    this->id=id;
    this->fullname=fullname;
    this->address=address;
    this->gpa=0;
}
Student::Student(string id,string fullname,string address,string gpa){
    this->id=stoi(id);
    this->fullname=new char [fullname.size()];
    strcpy(this->fullname, fullname.c_str());
    this->address=new char [address.size()];
    strcpy(this->address, address.c_str());
    this->gpa=stod(gpa);
}
Student::~Student(){
    if(!fullname) return;
    id=0;
    gpa=-1;
    delete [] fullname;
    delete [] address;
    fullname=nullptr;
    address=nullptr;
    cout<<"deleted"<<endl;
}
void Student::output(){
    cout<<"ID: "<<id<<endl;
    if (fullname)
        cout<<"Full name: "<<fullname<<endl;
    else
        cout<<"Full name: None\n";
    if (address)
    cout<<"Address: "<<address<<endl;
    else
        cout<<"Address: None\n";
    cout<<"GPA: "<<gpa<<endl;
}
