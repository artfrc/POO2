#include "Shield.h"

void Shield::setSuccessor(Shield* successor) {
    this->successor = successor;
}

Shield* Shield::getSuccessor() {
    return this->successor;
}

void weakShield::activateShield(int damage) {
    int rest = damage - (10/100 * damage);
    cout << "Weak shield activate!" << endl;
    cout << "Reduced damage: " << damage-rest << endl;
    if(rest != 0 && getSuccessor() != nullptr) {
        cout << "getSuccessor called" << endl;
        getSuccessor()->activateShield(rest);
    }else {
        cout << "Damage taken: " << rest << endl;
    }
}

void mediumShield::activateShield(int damage) {
    int rest = damage - (20/100 * damage);
    cout << "Medium shield activate!" << endl;
    cout << "Reduced damage: " << damage-rest << endl;
    if(rest != 0 && getSuccessor() != nullptr) {
        cout << "getSuccessor called" << endl;
        getSuccessor()->activateShield(rest);
    }else {
        cout << "Damage taken: " << rest << endl;
    }
}

void strongShield::activateShield(int damage) {
    int rest = damage - (30/100 * damage);
    cout << "Strong shield activate!" << endl;
    cout << "Reduced damage: " << damage-rest << endl;
    cout << "Damage taken: " << rest << endl;
}
