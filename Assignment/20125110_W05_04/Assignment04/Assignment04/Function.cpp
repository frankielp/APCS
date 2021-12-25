#include "Function.h"

void Prince::input() {
    cout << "-- Type prince's information --" << endl;
    cout << "Money: ";
    cin >> money;
    while (money < 0) {
        cout << "Money again: ";
        cin >> money;
    }

    cout << "Wisdom: ";
    cin >> wisdom;
    while (wisdom < 0) {
        cout << "Wisdom again: ";
        cin >> wisdom;
    }

    cout << "Strength: ";
    cin >> strength;
    while (strength < 0) {
        cout << "Strength again: ";
        cin >> strength;
    }
}
void Prince::output() {
    cout << "-- Prince's information --" << endl;
    cout << "Money: " << money << endl;
    cout << "Wisdom: " << wisdom << endl;
    cout << "Strength: " << strength << endl;
}
int Prince::getMoney() {
    return money;
}
int Prince::getWisdom() {
    return wisdom;
}
int Prince::getStrength() {
    return strength;
}
void Prince::setMoney(int money) {
    this->money = money;
}
void Prince::setStrength(int strength) {
    this->strength = strength;
}

void Castle::input() {
    int n;
    cout << "Type number of gate: ";
    cin >> n;
    while (n < 0) {
        cout << "Type number of gate again: ";
        cin >> n;
    }
    Gate* gate;
    int type;
    for (int i = 0; i < n; ++i) {
        cout<<"-- Gate: "<<i+1<<" --"<<endl;
        cout << "1. Business Gate" << endl;
        cout << "2. Academic Gate" << endl;
        cout << "3. Power Gate" << endl;
        cout << "Please input type of Gate: ";
        cin >> type;

        while (type<1||type>3) {
            cout << "Please input type of Gate again: ";
            cin >> type;
        }

        gate = nullptr;
        switch (type) {
            case 1:
                gate = new BusinessGate();
                break;
            case 2:
                gate = new AcademicGate();
                break;
            case 3:
                gate = new PowerGate();
                break;
            default:
                break;
        }
        gate->input();
        a.push_back(gate);
        cout << endl;
    }
}
bool Castle::savePrincess(Prince& p) {
    for (int i = 0; i < a.size(); ++i) {
        if (!a[i]->pass(p))
            return false;
    }
    return true;
}

void BusinessGate::input() {
    cout << "-- Input Business Gate --" << endl;
    cout << "Unit: ";
    cin >> unit;
    while (unit < 0) {
        cout << "Unit again: ";
        cin >> unit;
    }

    cout << "Quantity: ";
    cin >> quantity;
    while (quantity < 0) {
        cout << "Quantity again: ";
        cin >> quantity;
    }
}
bool BusinessGate::pass(Prince& p) {
    if (unit * quantity <= p.getMoney()) {
        p.setMoney(p.getMoney() - unit * quantity);
        return true;
    }
    return false;
}


void AcademicGate::input() {
    cout << "-- Input Academic Gate --" << endl;
    cout << "Wisdom: ";
    cin >> wisdom;
    while (wisdom < 0) {
        cout << "Wisdom again: ";
        cin >> wisdom;
    }
}
bool AcademicGate::pass(Prince& p) {
    if (p.getWisdom() >= wisdom)
        return true;
    return false;
}

void PowerGate::input() {
    cout << "-- Input Power Gate --" << endl;
    cout << "Strength: ";
    cin >> strength;
    while (strength < 0) {
        cout << "Strength again: ";
        cin >> strength;
    }
}
bool PowerGate::pass(Prince& p) {
    if (p.getStrength() >= strength) {
        p.setStrength(p.getStrength() - strength);
        return true;
    }
    return false;
}


