#ifndef CHARACTERSTATE_H
#define CHARACTERSTATE_H

#include <iostream>
#include <typeinfo>
#include "Character.h"

#define classname typeid(this).name()

using namespace std;

class Character;

class CharacterState {
protected:
    Character* _character;
    int minLife;
    int maxLife;

public:
    CharacterState(Character* c);

    virtual ~CharacterState() {}

    void setCharacter(Character* c);
    void setMinLife(int value);
    void setMaxLife(int value);

    Character* getCharacter();
    int getMinLife();
    int getMaxLife();

    void getDamage(int value);

    virtual void setLimitsLife() = 0;
    virtual void checkState() = 0;
    virtual void printState() = 0;

};

class deadState : public CharacterState {
public:
    deadState(Character* c);
    void setLimitsLife() override;
    void checkState() override;
    void printState() override;
};

class dangerState : public CharacterState {
public:
    dangerState(Character* c);
    void setLimitsLife() override;
    void checkState() override;
    void printState() override;
};

class normalState : public CharacterState {
public:
    normalState(Character* c);
    void setLimitsLife() override;
    void checkState() override;
    void printState() override;
};

class strongState : public CharacterState {
public:
    strongState(Character* c);
    void setLimitsLife() override;
    void checkState() override;
    void printState() override;
};

#endif // CHARACTERSTATE_H
