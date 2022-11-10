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

    cout << endl << "### TESTING STATE PATTERN ###" << endl;

    c3->takesDamage(50);
    cout << endl << "### Character03 ###" << endl;
    c3->attacking();
    c3->jumping();
    c3->running(); cout << endl;
    c3->takesDamage(20);

    return 0;
}
