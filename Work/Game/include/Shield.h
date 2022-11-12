#ifndef SHIELD_H
#define SHIELD_H

#include <iostream>

using namespace std;

class Shield {
protected:
    Shield* next;

public:
    void setNext(Shield* next);
    Shield* getNext();

    virtual int processShield(int value) = 0;
};

class weakShield : public Shield {
    int processShield(int value);
};

class mediumShield : public Shield {
    int processShield(int value);
};

class strongShield: public Shield {
    int processShield(int value);
};

#endif // SHIELD_H
