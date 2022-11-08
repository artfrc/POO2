#include "Character.h"

/*=================/
/  Class Character /
/*================*/

Character::Character(string theName, int theId) : name(theName), id(theId){
    this->life = 70;
    this->jump = nullptr;
    this->run = nullptr;
    this->attack = nullptr;
    //this->state = new normalState();
}

string Character::getName() {
    return this->name;
}

void Character::setName(string newName) {
    this->name = newName;
}

int Character::getId() {
    return this->id;
}

/*=================/
/ Class Character1 /
/*================*/

Character1::Character1(string name, int id) : Character{name, id} {
    setJump(new mediumJump());
    setRun(new mediumRun());
    setAttack(new strongAttack());
}

/*=================/
/ Class Character2 /
/*================*/

Character2::Character2(string name, int id) : Character{name, id}{
    setJump(new highJump());
    setRun(new fastRun());
    setAttack(new mediumAttack());
}

/*=================/
/ Class Character3 /
/*================*/

Character3::Character3(string name, int id) : Character{name, id}{
    setJump(new lowJump());
    setRun(new fastRun());
    setAttack(new strongAttack());
}

/*==================/
/ Actions Character /
/*=================*/

Jump * Character::getJump() {
    return this->jump;
}

void Character::setJump(Jump * newJump) {
    this->jump = newJump;
}

void Character::jumping(){
    jump->jump();
}

Run * Character::getRun() {
    return this->run;
}

void Character::setRun(Run * newRun) {
    this->run = newRun;
}

void Character::running() {
    run->run();
}

Attack * Character::getAttack() {
    return this->attack;
}

void * Character::setAttack(Attack * newAttack) {
    this->attack = newAttack;
}

void Character::attacking() {
    attack->attack();
}
