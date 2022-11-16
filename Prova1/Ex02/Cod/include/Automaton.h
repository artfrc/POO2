#ifndef AUTOMATON_H
#define AUTOMATON_H

#include <iostream>
#include <string>
#include "State.h"

using namespace std;

class State;

class Automaton {
protected:
    string word;
    State* _state;

public:
    Automaton(string s);
    void setWord(string s);
    void setState(State* s);

    string getWord();
    State* getState();
    bool ProcessWord(string s);
};

#endif // AUTOMATON_H
