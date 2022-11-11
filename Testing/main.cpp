#include <iostream>
#include "Character.h"

using namespace std;

int main() {

    Character01* c1 = new Character01();
    Character02* c2 = new Character02();
    Character03* c3 = new Character03();

    cout << "### TESTING STRATEGY PATTERN ###" << endl;

    cout << "### Character01 ###" << endl;
    c1->attacking();
    c1->jumping();
    c1->running();

    cout << endl << "### Character02 ###" << endl;
    c2->attacking();
    c2->jumping();
    c2->running();

    cout << endl << "### Character03 ###" << endl;
    c3->attacking();
    c3->jumping();
    c3->running();

    cout << "\n### TESTING STATE PATTERN ###" << endl;

    cout << endl << "### Character03 ###" << endl;
    c3->takesDamage(50);
    c3->attacking();
    c3->jumping();
    c3->running();

    cout << endl << "### TESTING CHAIN OF RESPOSIBILITY PATTERN ###" << endl;
    cout << endl << "### Character02 ###" << endl;
    c2->takesDamage(20);
    c2->takesShield(new weakShield());
    c2->takesDamage(50);
    c2->attacking();
    c2->jumping();
    c2->running();

    return 0;
}
