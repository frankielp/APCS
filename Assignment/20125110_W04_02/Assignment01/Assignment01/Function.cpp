//
//  Function.cpp
//  Assignment01
//
//  Created by Le Pham Nhat Quynh on 11/2/21.
//

#include "Function.h"
Employee::Employee(){
    this->id=0;
    this->name="Empty";
    this->hireDate="Empty";
    this->address="Empty";
}
Employee::Employee(int id, string name, string hireDate,string address){
    this->id=id;
    this->name=name;
    this->hireDate=hireDate;
    this->address=address;
}
Employee::Employee(int id, string name, string hireDate){
    this->id=id;
    this->name=name;
    this->hireDate=hireDate;
    this->address="Empty";
}
Employee::Employee(int id, string name){
    this->id=id;
    this->name=name;
    this->hireDate="Empty";
    this->address="Empty";
}
Employee::Employee(int id){
    this->id=id;
    this->name="Empty";
    this->hireDate="Empty";
    this->address="Empty";
}
void Employee::output(){
    cout<<"ID: "<<id<<endl;
    cout<<"Full name: "<<name<<endl;
    cout<<"Hiring date: "<<hireDate<<endl;
    cout<<"Address: "<<address<<endl;
}
void Worker::input(){
    int id;
    string name;
    string hireDate;
    string address;
    float ratePay;
    int item;
    cout<<"Type information \n";
    cout<<"ID: "; cin>>id;
    cout<<"Full name: ";cin>>name;
    cout<<"Hiring date: ";cin>>hireDate;
    cout<<"Address: ";cin>>address;
    cout<<"Number of item: ";cin>>item;
    cout<<"Rate of pay: ";cin>>ratePay;
    *this=Worker(id,name,hireDate,address,item,ratePay);
}
void Worker::output(){
    Employee::output();
    cout<<"Number of item: "<<item<<endl;
    cout<<"Rate of pay: "<<ratePay<<endl;
}
float Worker::salary(){
    return item*ratePay;
}
Worker::Worker(){
    
    item=0;
    ratePay=0;
}
Worker::Worker(int id, string name, string hireDate,string address,float ratePay, int item):Employee(id,name,hireDate,address){
    this->item=item;
    this->ratePay=ratePay;
}
Worker::Worker(int id, string name, string hireDate,string address,float ratePay):Employee(id,name,hireDate,address){
    this->item=0;
    this->ratePay=ratePay;
}
Worker::Worker(int id, string name, string hireDate,string address){
    this->item=0;
    this->ratePay=0;
    
}
Worker::Worker(int id, string name, string hireDate):Employee(id,name,hireDate){
    this->item=0;
    this->ratePay=0;
}
Worker::Worker(int id, string name):Employee(id,name){
    this->item=0;
    this->ratePay=0;
}
Worker::Worker(int id):Employee(id){
    this->item=0;
    this->ratePay=0;
}
void OfficeEmployee::input(){
    int id;
    string name;
    string hireDate;
    string address;
    float ratePay;
    int item;
    cout<<"Type information \n";
    cout<<"ID: "; cin>>id;
    cout<<"Full name: ";cin>>name;
    cout<<"Hiring date: ";cin>>hireDate;
    cout<<"Address: ";cin>>address;
    cout<<"Number of item: ";cin>>item;
    cout<<"Rate of pay: ";cin>>ratePay;
    *this=OfficeEmployee(id,name,hireDate,address,item,ratePay);
}
void OfficeEmployee::output(){
    Employee::output();
    cout<<"Number of item: "<<workDay<<endl;
    cout<<"Rate of pay: "<<ratePay<<endl;
}
float OfficeEmployee::salary(){
    return workDay*ratePay;
}
OfficeEmployee::OfficeEmployee(){
    workDay=0;
    ratePay=0;
}
OfficeEmployee::OfficeEmployee(int id, string name, string hireDate,string address,float ratePay, int workDay):Employee(id,name,hireDate,address){
    this->workDay=workDay;
    this->ratePay=ratePay;
}
OfficeEmployee::OfficeEmployee(int id, string name, string hireDate,string address,float ratePay):Employee(id,name,hireDate,address){
    this->workDay=0;
    this->ratePay=ratePay;
}
OfficeEmployee::OfficeEmployee(int id, string name, string hireDate,string address){
    this->workDay=0;
    this->ratePay=0;
    
}
OfficeEmployee::OfficeEmployee(int id, string name, string hireDate):Employee(id,name,hireDate){
    this->workDay=0;
    this->ratePay=0;
}
OfficeEmployee::OfficeEmployee(int id, string name):Employee(id,name){
    this->workDay=0;
    this->ratePay=0;
    
}
OfficeEmployee::OfficeEmployee(int id):Employee(id){
    this->workDay=0;
    this->ratePay=0;
}
