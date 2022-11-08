#ifndef ATTACK_H
#define ATTACK_H

#include <iostream>

using namespace std;

/*==============/
/ Class attack  /
/    abstract   /
/*=============*/

class Attack {
public:
    virtual void attack() = 0;
};

/*=================/
/ Types of attack  /
/*================*/

class weakAttack:public Attack {
public:
    void attack();
};

class mediumAttack:public Attack {
public:
    void attack();
};

class strongAttack:public Attack {
public:
    void attack();
};

#endif // ATTACK_H
