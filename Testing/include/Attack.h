#ifndef ATTACK_H
#define ATTACK_H
#include <iostream>

using namespace std;

class Attack{
public:
    virtual void action() = 0;
    virtual ~Attack() {}
};

class weakAttack : public Attack {
    void action() override;
};

class mediumAttack : public Attack {
    void action() override;
};

class strongAttack : public Attack {
    void action() override;
};

#endif // ATTACK_H
