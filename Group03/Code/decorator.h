#ifndef DECORATOR_H_
#define DECORATOR_H_

#include <iostream>

using namespace std;

class Component{
public:
    virtual ~Component()=0;
    virtual void execute() const = 0;
};

class ConcreteComponent : public Component{ // "is a" relationship
public:
    void execute() const;
};

class BaseDecorator : public Component{ // "is a" relationship
private:
    Component *wrappee; //"has a" relationship
public:
    BaseDecorator(Component *Wrappee);
    void execute() const;
};

class ConcreteDecorator : public BaseDecorator{
public:
    ConcreteDecorator(Component *wrappee);
    void execute() const;
    void extra();
};

#endif