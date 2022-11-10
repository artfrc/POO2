#include "Character.h"

Character::Character() {
    this->_attack = nullptr;
    this->_jump = nullptr;
    this->_run = nullptr;
    this->_state = new normalState(this);
    this->life = 100 * 0.7;
}

void Character::setJump(Jump* j) { this->_jump = j; }
void Character::setRun(Run* r) { this->_run = r; }
void Character::setAttack(Attack* a) { this->_attack = a; }
void Character::setState(CharacterState* state) { this->_state = state; }
void Character::setLife(int value) { this->life = value; }

Jump* Character::getJump() { return this->_jump; }
Run* Character::getRun() { return this->_run; }
Attack* Character::getAttack() { return this->_attack; }
CharacterState* Character::getState() { return this->_state; }
int Character::getLife() { return this->life; }

void Character::attacking() { this->_attack->action(); }
void Character::jumping() { this->_jump->action(); }
void Character::running() { this->_run->action(); }

void Character::transitionTo(CharacterState* state) {
    this->_state = state;
}

void Character::takesDamage(int value) {
    cout << ">> Current life " << typeid(this).name() << ": " << this->getLife() << endl;
    cout << ">> " << typeid(this).name() << " took " << value <<  " damage!" << endl;
    this->_state->getDamage(value);
    cout << ">> Current life " << typeid(this).name() << ": " << this->getLife() << endl;
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
