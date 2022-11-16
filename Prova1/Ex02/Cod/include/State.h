#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <string>
#include <typeinfo>
#include "Automaton.h"

using namespace std;

class Automaton;

class State {
protected:
    Automaton* _automaton;

public:
    State(Automaton* _aut);
    void setAutomaton(Automaton* aut);
    Automaton* getAutomaton();

    virtual bool ProcessWordState(string s) = 0;

};

class State1: public State {
public:
    State1(Automaton* _aut);
    bool ProcessWordState(string s) override;
};

class State2: public State {
public:
    State2(Automaton* _aut);
    bool ProcessWordState(string s) override;
};

class State3: public State {
public:
    State3(Automaton* _aut);
    bool ProcessWordState(string s) override;
};

class State4: public State {
public:
    State4(Automaton* _aut);
    bool ProcessWordState(string s) override;
};
#endif // STATE_H
