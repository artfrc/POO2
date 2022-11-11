#include "IHandler.h"

void IHandler::setNext(IHandler* handler) {  this->nextHandler = handler; }

IHandler* IHandler::getNext() { return nextHandler; }

int handleEvent1::protects(int value) {
    return value * 0.7;
}

int handleEvent2::protects(int value) {
    return value * 0.5;
}

int handleEvent3::protects(int value) {
    return value * 0.3;
}
