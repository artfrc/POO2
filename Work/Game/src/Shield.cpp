#include "Shield.h"

void Shield::setNext(Shield* sh) { this->next = sh; }

Shield* Shield::getNext() { return this->next; }

int weakShield::processShield(int value) {
    int reduced = value*0.25;
    int rest = value-reduced;
    cout << ">> Weak shield called! Damage reduced: " << reduced << endl;
    if(rest != 0 && getNext() != nullptr)
        getNext()->processShield(rest);
    else
        return rest;
}

int mediumShield::processShield(int value) {
    int reduced = value*0.45;
    int rest = value-reduced;
    cout << ">> Medium shield called! Damage reduced: " << reduced << endl;
    if(rest != 0 && getNext() != nullptr)
        getNext()->processShield(rest);
    else
        return rest;
}

int strongShield::processShield(int value) {
    int reduced = value*0.75;
    int rest = value-reduced;
    cout << ">> Strong shield called! Damage reduced: " << reduced << endl;
    if(rest != 0 && getNext() != nullptr)
        getNext()->processShield(rest);
    else
        return rest;
}
