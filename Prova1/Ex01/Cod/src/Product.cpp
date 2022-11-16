#include "Product.h"

Product::Product() : amount(0), _state(new UnavailableState(this)) {}

void Product::setAmount(int value) { this->amount = value; }
void Product::setState(State* s) { this->_state = s; }

int Product::getAmount() { return this->amount; }
State* Product::getState() { return this->_state; }

void Product::BuyProduct(int amount) { this->_state->BuyProductState(amount); }

void Product::SellProduct(int amount) {
    if(amount > this->getAmount())
        cout << ">> Insufficient quantity!" << endl;
    else
        this->_state->SellProductState(amount);
}
