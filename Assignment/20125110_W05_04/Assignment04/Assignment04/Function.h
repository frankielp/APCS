//
//  Function.hpp
//  Assignment04
//
//  Created by Le Pham Nhat Quynh on 11/13/21.
//

#ifndef Function_h
#define Function_h

#include <iostream>
#include <vector>
using namespace std;
class Prince{
private:
    int money;
    int wisdom;
    int strength;
public:
    void input();
    void output();
    int getMoney();
    int getWisdom();
    int getStrength();
    void setMoney(int money);
    void setStrength(int strength);
};
class Gate{
public:
    virtual void input() = 0;
    virtual bool pass(Prince& p) =0;
};
class BusinessGate:public Gate{
private:
    int quantity;
    int unit;
public:
    virtual void input();
    virtual bool pass(Prince& p);
};
class AcademicGate:public Gate{
private:
    int wisdom;
public:
    virtual void input();
    virtual bool pass(Prince& p);
};
class PowerGate:public Gate{
private:
    int strength;
public:
    virtual void input();
    virtual bool pass(Prince& p);
};

class Castle{
private:
    vector<Gate*> a;
public:
    void input();
    bool savePrincess(Prince& p);
};
#endif /* Function_hpp */
