#include "CharacterState.h"

CharacterState::CharacterState(Character* c) {
    this->_character = c;
}

void CharacterState::setCharacter(Character* c) { this->_character = c; }
void CharacterState::setMinLife(int value) { this->minLife = value; }
void CharacterState::setMaxLife(int value) { this->maxLife = value; }

Character* CharacterState::getCharacter() { return this->_character; }
int CharacterState::getMinLife() { return this->minLife; }
int CharacterState::getMaxLife() { return this->maxLife; }

void CharacterState::getDamage(int value) {
    this->getCharacter()->setLife(this->getCharacter()->getLife() - value);
    this->checkState();
}


deadState::deadState(Character* c) : CharacterState::CharacterState(c) {}

void deadState::setLimitsLife() {
    this->setMinLife(0);
    this->setMaxLife(0);
}

void deadState::checkState() {
    return;
}

void deadState::printState() { cout << ">> Current state " << typeid(this->_character).name() << ": " << classname << endl; }

dangerState::dangerState(Character* c) : CharacterState::CharacterState(c) {}

void dangerState::setLimitsLife() {
    this->setMinLife(1);
    this->setMaxLife(29);
}

void dangerState::checkState() {
    this->setLimitsLife();
    if(this->_character->getLife() < this->getMinLife()) {
        this->printState();
        cout << ">> You died!" << endl;

        this->_character->setState(new deadState(this->getCharacter()));
        exit(1);
    } else if(this->_character->getLife() > this->getMaxLife()) {
        this->printState();
        cout << ">> Changing state..." << endl;

        this->_character->setState(new normalState(this->getCharacter()));

        this->getCharacter()->setAttack(new mediumAttack());
        this->getCharacter()->setRun(new mediumRun());
    } else { this->printState(); }
}

void dangerState::printState() { cout << ">> Current state " << typeid(this->_character).name() << ": " << classname << endl; }

normalState::normalState(Character* c) : CharacterState::CharacterState(c) {}

void normalState::setLimitsLife() {
    this->setMinLife(30);
    this->setMaxLife(70);
}

void normalState::checkState() {
    this->setLimitsLife();
    if(this->_character->getLife() < this->getMinLife()) {
        this->printState();

        this->getCharacter()->setState(new dangerState(this->getCharacter()));

        this->getCharacter()->setAttack(new weakAttack());
        this->getCharacter()->setRun(new slowRun());

    } else if(this->_character->getLife() > this->getMaxLife()) {
        this->printState();
        cout << ">> Changing state..." << endl;

        this->_character->setState(new strongState(this->getCharacter()));

        this->getCharacter()->setAttack(new strongAttack());
        this->getCharacter()->setRun(new fastRun());
    } else { this->printState(); }
}

void normalState::printState() { cout << ">> Current state " << typeid(this->_character).name() << ": " << classname << endl; }

strongState::strongState(Character* c) : CharacterState::CharacterState(c) {}

void strongState::setLimitsLife() {
    this->setMinLife(71);
    this->setMaxLife(100);
}

void strongState::checkState() {
    this->setLimitsLife();
    if(this->_character->getLife() < this->getMinLife()) {
        this->printState();
        cout << ">> Changing state..." << endl;

        this->_character->setState(new normalState(this->getCharacter()));

        this->getCharacter()->setAttack(new mediumAttack());
        this->getCharacter()->setRun(new mediumRun());
    } else if(this->_character->getLife() > this->getMaxLife()) {
        this->_character->setLife(100);
    } else { this->printState(); }
}

void strongState::printState() { cout << ">> Current state " << typeid(this->_character).name() << ": " << classname << endl; }
