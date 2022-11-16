#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <climits>
#include "Product.h"

#include <typeinfo>

using namespace std;

class Product;

class State {
protected:
    Product* _product;
    int minAmount;
    int maxAmount;

public:
    State(Product* p);
    Product* getProduct();
    void BuyProductState(int amount);
    void SellProductState(int amount);

    virtual void printNameState() = 0;
    virtual void SetLimitsAmount() = 0;
    virtual void CheckState() = 0;
};

class AvailableState : public State {
public:
    AvailableState(Product* p);
    void SetLimitsAmount() override;
    void CheckState() override;
    void printNameState() override;
};

class CriticalState : public State {
public:
    CriticalState(Product* p);
    void SetLimitsAmount() override;
    void CheckState() override;
    void printNameState() override;
};

class UnavailableState : public State {
public:
    UnavailableState(Product* p);
    void SetLimitsAmount() override;
    void CheckState() override;
    void printNameState() override;
};

#endif // STATE_H
