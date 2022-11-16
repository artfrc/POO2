#include <iostream>
#include "Automaton.h"

using namespace std;

int main() {

    string s = "aaacdb";

    Automaton* _aut = new Automaton(s);
    cout << ">> Word: " << _aut->getWord() << endl;
    while(_aut->ProcessWord(_aut->getWord())) {}

    s = "ababacdaaac";
    _aut = new Automaton(s);
    cout << endl << ">> Word: " << _aut->getWord() << endl;
    while(_aut->ProcessWord(_aut->getWord())) {}

    s = "abcdb";
    _aut = new Automaton(s);
    cout << endl << ">> Word: " << _aut->getWord() << endl;
    while(_aut->ProcessWord(_aut->getWord())) {}

    s = "acda";
    _aut = new Automaton(s);
    cout << endl << ">> Word: " << _aut->getWord() << endl;
    while(_aut->ProcessWord(_aut->getWord())) {}

    s = "acdbdb";
    _aut = new Automaton(s);
    cout << endl << ">> Word: " << _aut->getWord() << endl;
    while(_aut->ProcessWord(_aut->getWord())) {}

    return 0;
}
