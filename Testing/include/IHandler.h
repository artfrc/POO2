#ifndef IHANDLER_H
#define IHANDLER_H

#include <iostream>
#include <string>

using namespace std;

class IHandler {
protected:
    IHandler* nextHandler;

public:
    void setNext(IHandler* handler);
    IHandler* getNext();

    virtual int protects(int value) = 0;
};

class handleEvent1 : public IHandler {
public:
    int protects(int value) override;
};

class handleEvent2 : public IHandler {
public:
    int protects(int value) override;
};

class handleEvent3 : public IHandler {
public:
    int protects(int value) override;
};

#endif // IHANDLER_H
