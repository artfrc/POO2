#ifndef JUMP_H
#define JUMP_H

#include <iostream>

using namespace std;

/*==============/
/   Class jump  /
/    abstract   /
/*=============*/

class Jump {
public:
    virtual void jump() = 0;
};

/*=================/
/   Types of jump  /
/*================*/

class lowJump:public Jump {
public:
    void jump();
};

class mediumJump:public Jump {
public:
    void jump();
};

class highJump:public Jump {
public:
    void jump();
};

#endif // JUMP_H
