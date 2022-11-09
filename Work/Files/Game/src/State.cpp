#include "State.h"

State::State(Character* c) {
    this->c = c;
}

void State::damage(int damage) {
    this->c->setLife(this->c->getLife() - damage);
    this->checkState();
}

void State::life(int life) {
    int aux = this->c->getLife() + life;
    if(aux > 100) aux = 100;
    this->c->setLife(aux);
    this->checkState();
}

void State::setMinLife(int life) {
    this->minLife = life;
}

void State::setMaxLife(int life) {
    this->maxLife = life;
}

int State::getMinLife() {
   return this->minLife;
}

int State::getMaxLife() {
    return this->maxLife;
}

Character* State::getCharacter() {
    return this->c;
}

normalState::normalState(Character* c) : State::State(c) {}

void normalState::setLimits() {
    this->setMinLife(30);
    this->setMaxLife(70);
}

void normalState::checkState() {
    this->setLimits();
    if(this->getCharacter()->getLife() < this->getMinLife()) {
        this->getCharacter()->setState(new dangerState(this->getCharacter()));
        this->getCharacter()->setAttack(new weakAttack());
        this->getCharacter()->setRun(new slowRun());
    }else if(this->getCharacter()->getLife() > this->getMaxLife()){
        this->getCharacter()->setState(new strongState(this->getCharacter()));
        this->getCharacter()->setAttack(new strongAttack());
        this->getCharacter()->setRun(new fastRun());
    }
}

dangerState::dangerState(Character* c) : State::State(c) {}

void dangerState::setLimits() {
    this->setMinLife(1);
    this->setMaxLife(29);
}

void dangerState::checkState() {
    this->setLimits();
    if(this->getCharacter()->getLife() < this->getMinLife()) {
        this->getCharacter()->setState(new deadState(this->getCharacter()));
        cout << "You died!" << endl;
        exit(1);
    }else if(this->getCharacter()->getLife() > this->getMaxLife()){
        this->getCharacter()->setState(new normalState(this->getCharacter()));
        this->getCharacter()->setAttack(new mediumAttack());
        this->getCharacter()->setRun(new mediumRun());
    }
}

deadState::deadState(Character* c) : State::State(c) {}

void deadState::setLimits() {
    this->setMinLife(-500);
    this->setMaxLife(-1);
}

void deadState::checkState() {
    return;
}

strongState::strongState(Character* c) : State::State(c) {}

void strongState::setLimits() {
    this->setMinLife(71);
    this->setMaxLife(100);
}

void strongState::checkState() {
    this->setLimits();
    if(this->getCharacter()->getLife() < this->getMinLife()) {
        this->getCharacter()->setState(new normalState(this->getCharacter()));
        this->getCharacter()->setAttack(new mediumAttack());
        this->getCharacter()->setRun(new mediumRun());
    }else if(this->getCharacter()->getLife() > this->getMaxLife()){
        this->getCharacter()->setLife(100);
    }
}
