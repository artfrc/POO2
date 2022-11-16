#include <iostream>
#include "Product.h"

using namespace std;

int main() {

    Product* p = new Product();
    cout << ">> Amount is: " << p->getAmount() << endl;
    p->getState()->printNameState();

    p->BuyProduct(10);
    cout << ">> Amount is: " << p->getAmount() << endl;
    p->getState()->printNameState();

    p->BuyProduct(10);
    cout << ">> Amount is: " << p->getAmount() << endl;
    p->getState()->printNameState();

    p->SellProduct(10);
    cout << ">> Amount is: " << p->getAmount() << endl;
    p->getState()->printNameState();

    p->SellProduct(10);
    cout << ">> Amount is: " << p->getAmount() << endl;
    p->getState()->printNameState();

    p->SellProduct(10);
    cout << ">> Amount is: " << p->getAmount() << endl;
    p->getState()->printNameState();


    return 0;
}
