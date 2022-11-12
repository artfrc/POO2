#include "Character.h"

#include <iostream>

Character::Character() {
    this->_attack = nullptr;
    this->_jump = nullptr;
    this->_run = nullptr;
    this->_state = new normalState(this);
    this->life = 100 * 0.7;
    this->sh = nullptr;

}

void Character::setJump(Jump* j) { this->_jump = j; }
void Character::setRun(Run* r) { this->_run = r; }
void Character::setAttack(Attack* a) { this->_attack = a; }
void Character::setState(CharacterState* state) { this->_state = state; }
void Character::setLife(int value) { this->life = value; }
void Character::setShield(Shield* sh) { this->sh = sh; }

Jump* Character::getJump() { return this->_jump; }
Run* Character::getRun() { return this->_run; }
Attack* Character::getAttack() { return this->_attack; }
CharacterState* Character::getState() { return this->_state; }
int Character::getLife() { return this->life; }
Shield* Character::getShield() { return this->sh; }

void Character::attacking() {
    cout << ">> I'm attacking! Damage is " << this->_attack->getDamage() << endl;
}

void Character::jumping() { this->_jump->action(); }
void Character::running() { this->_run->action(); }

void Character::transitionTo(CharacterState* state) {
    this->_state = state;
}

void Character::takesDamage(int value) {
    cout << ">> Current life " << typeid(this).name() << ": " << this->getLife() << endl;
    if(this->getShield() != nullptr) {
        value = this->sh->processShield(value);
    } else {
        cout << ">> " << typeid(this).name() << " not have shield!" << endl;
    }
    cout << ">> " << typeid(this).name() << " took " << value <<  " damage!" << endl;
    this->_state->getDamage(value);
    cout << ">> Current life " << typeid(this).name() << ": " << this->getLife() << endl;
}

void Character::takesShield(Shield* sh) {
    cout << ">> " << typeid(this).name() << " get shield!" << endl;
    if(this->sh == nullptr) {
        this->sh = sh;
    } else {
        this->sh->setNext(sh);
    }
}

void Character::getAttackSpecial01() {
    int temp = this->_attack->getDamage();
    this->_attack = new Decorator1(this->_attack);
    cout << ">> " << typeid(this).name() << " get attack special 01! Gained " << this->_attack->getDamage()-temp << " damage!" << endl;
}

void Character::getAttackSpecial02() {
    int temp = this->_attack->getDamage();
    this->_attack = new Decorator2(this->_attack);
    cout << ">> " << typeid(this).name() << " get attack special 02! Gained " << this->_attack->getDamage()-temp << " damage!" << endl;
}

void Character::getAttackSpecial03() {
    int temp = this->_attack->getDamage();
    this->_attack = new Decorator3(this->_attack);
    cout << ">> " << typeid(this).name() << " get attack special 03! Gained " << this->_attack->getDamage()-temp << " damage!" << endl;
}

Character01::Character01() {
    setAttack(new strongAttack());
    setJump(new mediumJump());
    setRun(new mediumRun());
}

Character02::Character02() {
    setAttack(new mediumAttack());
    setJump(new highJump());
    setRun(new fastRun());
}

Character03::Character03() {
    setAttack(new strongAttack());
    setJump(new lowJump());
    setRun(new fastRun());
}
