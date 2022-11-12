#ifndef ATTACK_H
#define ATTACK_H
#include <iostream>

using namespace std;

// Header where you will manage the character's attacks

class Attack{
protected:
    int damage;

public:
    int getDamage();
    void setDamage(int v);
    virtual ~Attack() {}
};

// Types of attack

class weakAttack : public Attack {
public:
    weakAttack();
};

class mediumAttack : public Attack {
public:
    mediumAttack();
};

class strongAttack : public Attack {
public:
    strongAttack();
};

// Decorators

class attackDecorator : public Attack {
protected:
    Attack* _attackDecorator;

public:
    attackDecorator(Attack* atkDec);
    int getDamage();
};

class Decorator1 : public attackDecorator {
public:
    Decorator1(Attack* atk);
};

class Decorator2 : public attackDecorator {
public:
    Decorator2(Attack* atk);
};

class Decorator3 : public attackDecorator {
public:
    Decorator3(Attack* atk);
};

#endif // ATTACK_H
