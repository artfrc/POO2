#ifndef JUMP_H
#define JUMP_H
#include <iostream>

using namespace std;

class Jump {
public:
    virtual void action() = 0;
    virtual ~Jump() {}
};

class lowJump : public Jump {
    void action() override;
};

class mediumJump : public Jump {
    void action() override;
};

class highJump : public Jump {
    void action() override;
};

#endif // JUMP_H
