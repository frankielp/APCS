#include "decorator.h"

using namespace std;

Component::~Component(){};

void ConcreteComponent::execute() const{
    cout << "Called execute of ConcreteComponent.\n";
}

BaseDecorator::BaseDecorator(Component *Wrappee){
    wrappee = Wrappee;
}

void BaseDecorator::execute() const{
    wrappee->execute();
}

ConcreteDecorator::ConcreteDecorator(Component *comp) : BaseDecorator(comp){}

void ConcreteDecorator::execute() const{
    cout << "Called execute of ConcreteDecorator\n";
    BaseDecorator::execute();
}