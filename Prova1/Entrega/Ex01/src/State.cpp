#include "State.h"

State::State(Product* p) : _product(p) {}

Product* State::getProduct() { return this->_product; }

void State::BuyProductState(int amount) {
    cout << ">> Buying " << amount << " quantities" << endl << endl;
    this->_product->setAmount(this->_product->getAmount()+amount);
    this->CheckState();
}

void State::SellProductState(int amount) {
    cout << ">> Selling " << amount << " quantities" << endl << endl;
    if(this->getProduct()->getAmount() < 11 && this->getProduct()->getAmount() > 0) {
        cout << ">> Critical State! Restock!" << endl;
    }
    this->_product->setAmount(this->_product->getAmount()-amount);
    this->CheckState();
}

AvailableState::AvailableState(Product* p) : State { p } {}

void AvailableState::SetLimitsAmount() {
    this->minAmount = 11;
    this->maxAmount = INT_MAX;
}

void AvailableState::CheckState() {
    this->SetLimitsAmount();
    if(this->_product->getAmount() < this->minAmount) {
        this->_product->setState(new CriticalState(this->_product));
    }
}

void AvailableState::printNameState() {
    cout << ">> State is: " << typeid(this).name() << endl;
}

CriticalState::CriticalState(Product* p) : State { p } {}

void CriticalState::SetLimitsAmount() {
    this->minAmount = 1;
    this->maxAmount = 10;
}

void CriticalState::CheckState() {
    this->SetLimitsAmount();
    if(this->_product->getAmount() < this->minAmount) {
        this->_product->setState(new UnavailableState(this->_product));
    } else if(this->_product->getAmount() > this->maxAmount) {
        this->_product->setState(new AvailableState(this->_product));
    }
}

void CriticalState::printNameState() {
    cout << ">> State is: " << typeid(this).name() << endl;
}

UnavailableState::UnavailableState(Product* p) : State { p } {}

void UnavailableState::SetLimitsAmount() {
    this->minAmount = 0;
    this->maxAmount = 0;
}

void UnavailableState::CheckState() {
    this->SetLimitsAmount();
    if(this->_product->getAmount() > this->maxAmount) {
        this->_product->setState(new CriticalState(this->_product));
    }
}

void UnavailableState::printNameState() {
    cout << ">> State is: " << typeid(this).name() << endl;
}
