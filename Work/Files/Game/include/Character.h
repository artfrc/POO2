#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>
#include "Jump.h"
#include "Run.h"
#include "Attack.h"
#include "State.h"

using namespace std;

/*=================/
/  Class Character /
/*================*/

class State;
class Shield;

class Character {
private:
    string name;
    int id;
    int life;
    Jump* jump;
    Run* run;
    Attack* attack;
    State* state;
    Shield* shield;

public:
    Character(string theName, int theId);

    string getName();
    void setName(string newName);

    int getId();

    Jump* getJump();
    void setJump(Jump* newJump);
    void jumping();

    Run* getRun();
    void setRun(Run* newRun);
    void running();

    Attack* getAttack();
    void setAttack(Attack* newAttack);
    void attacking();

    void setState(State* newState);
    State* getState();

    void setLife(int life);
    int getLife();

    void takesDamege(int damage);
    void takeLife(int life);

    void takeShield(Shield* typeShield);
    bool hasShield();

};

/*=================/
/ Class Character1 /
/*================*/

class Character1:public Character {
public:
    Character1(string name, int id);
};

/*=================/
/ Class Character2 /
/*================*/

class Character2:public Character {
public:
    Character2(string name, int id);
};

/*=================/
/ Class Character3 /
/*================*/

class Character3:public Character {
public:
    Character3(string name, int id);
};

#endif // CHARACTER_H
