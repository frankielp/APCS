//
//  Function.hpp
//  Assignment01
//
//  Created by Le Pham Nhat Quynh on 11/2/21.
//

#ifndef Function_hpp
#define Function_hpp

#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Employee{
private:
    int id;
    string name;
    string hireDate;
    string address;
public:
    Employee();
    Employee(int id, string name, string hireDate,string address);
    Employee(int id, string name, string hireDate);
    Employee(int id, string name);
    Employee(int id);
    virtual void output();
    virtual void input();
    virtual float salary();
    ~Employee(){};
};
class Worker : public Employee{
private:
    float ratePay=300;
    int item;
public:
    void input();
    void output();
    float salary();
    Worker();
    Worker(int id, string name, string hireDate,string address,float ratePay, int item);
    Worker(int id, string name, string hireDate,string address,float ratePay);
    Worker(int id, string name, string hireDate,string address);
    Worker(int id, string name, string hireDate);
    Worker(int id, string name);
    Worker(int id);

    ~Worker(){};
};
class OfficeEmployee : public Employee{
private:
    float ratePay=20;
    int workDay;
public:
    void input();
    void output();
    float salary();
    OfficeEmployee();
    OfficeEmployee(int id, string name, string hireDate,string address,float ratePay, int workDay);
    OfficeEmployee(int id, string name, string hireDate,string address,float ratePay);
    OfficeEmployee(int id, string name, string hireDate,string address);
    OfficeEmployee(int id, string name, string hireDate);
    OfficeEmployee(int id, string name);
    OfficeEmployee(int id);
    ~OfficeEmployee(){};
};
class Company {
private:
    string name;
    vector<Employee*> hr;
public:
    void input();
    void output();
    float totalSalary();
    void printMaxSalary();
    float getMaxSalary();
    
};
#endif /* Function_hpp */
