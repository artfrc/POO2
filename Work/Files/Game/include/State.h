#ifndef STATE_H
#define STATE_H

#include <iostream>
#include "Character.h"

class Character;

using namespace std;

/*===============/
/  Class State   /
/*==============*/

class State {
private:
    Character* c;
    int minLife;
    int maxLife;

public:
    State(Character* c);

    void damage(int damage);
    void life(int life);

    int getMinLife();
    int getMaxLife();
    Character* getCharacter();


    void setMinLife(int life);
    void setMaxLife(int life);

    virtual void setLimits() = 0;
    virtual void checkState() = 0;
};

class normalState:public State {
public:
    normalState(Character* c);

    virtual void setLimits();
    virtual void checkState();
};

class dangerState:public State {
public:
    dangerState(Character* c);

    virtual void setLimits();
    virtual void checkState();
};

class deadState:public State {
public:
    deadState(Character* c);

    virtual void setLimits();
    virtual void checkState();
};

class strongState:public State {
public:
    strongState(Character* c);

    virtual void setLimits();
    virtual void checkState();
};

#endif // STATE_H
