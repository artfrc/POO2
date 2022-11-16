#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include "State.h"

using namespace std;

class State;

class Product {
protected:
    int amount;
    State* _state;

public:
    Product();
    void setAmount(int value);
    void setState(State* s);

    int getAmount();
    State* getState();
    void BuyProduct(int amount);
    void SellProduct(int amount);
};

#endif // PRODUCT_H
