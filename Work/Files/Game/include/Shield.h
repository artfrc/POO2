#ifndef SHIELD_H
#define SHIELD_H

#include <iostream>
using namespace std;

class Character;

// Handler
class Shield {
private:
    Character* c;
    Shield* successor;

public:
    void setSuccessor(Shield* successor);
    Shield* getSuccessor();
    void takeShield(Shield* sh);

    virtual void activateShield(int damage) = 0;

};

// ConcreteHandler
class weakShield:public Shield {
    void activateShield(int damage);
};

class mediumShield:public Shield {
    void activateShield(int damage);
};

class strongShield:public Shield {
    void activateShield(int damage);
};

#endif // SHIELD_H
