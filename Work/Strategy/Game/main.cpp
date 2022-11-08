#include <iostream>
#include "Character.h"

using namespace std;

int main() {

    Character1* c1 = new Character1("C1",1);
    Character2* c2 = new Character2("C2",2);
    Character3* c3 = new Character3("C3",3);

    cout << ">>> Character 01:\n";
    cout << c1->getName() << " " << c1->getId() << endl;
    c1->jumping();
    c1->running();
    c1->attacking();
    c1->setAttack(new weakAttack());
    cout << ">>> Switching attack!\n";
    c1->attacking();

    cout << "\n>>> Character 02:\n";
    cout << c2->getName() << " " << c2->getId() << endl;
    c2->jumping();
    c2->running();
    c2->attacking();
    c2->setAttack(new weakAttack());
    cout << ">>> Switching attack!\n";
    c2->attacking();

    cout << "\n>>> Character 03:\n";
    cout << c3->getName() << " " << c3->getId() << endl;
    c3->jumping();
    c3->running();
    c3->attacking();
    c3->setAttack(new weakAttack());
    cout << ">>> Switching attack!\n";
    c3->attacking();

    return 0;
}
