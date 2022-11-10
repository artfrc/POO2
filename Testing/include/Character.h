#ifndef CHARACTER_H
#define CHARACTER_H

#include "Jump.h"
#include "Run.h"
#include "Attack.h"
#include "CharacterState.h"

using namespace std;

class CharacterState;

class Character {
protected:
    int life;
    Jump* _jump;
    Run* _run;
    Attack* _attack;
    CharacterState* _state;

public:
    Character();
    virtual ~Character() {}

    // Setters & getters

    void setJump(Jump* j);
    void setRun(Run* r);
    void setAttack(Attack* a);
    void setState(CharacterState* state);
    void setLife(int value);

    Jump* getJump();
    Run* getRun();
    Attack* getAttack();
    CharacterState* getState();
    int getLife();

    // Others functions

    void attacking();
    void jumping();
    void running();
    void transitionTo(CharacterState* state);
    void takesDamage(int value);

};

class Character01 : public Character {
public:
    Character01();
};

class Character02 : public Character {
public:
    Character02();
};

class Character03 : public Character {
public:
    Character03();
};

#endif // CHARACTER_H
