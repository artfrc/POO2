#include "Automaton.h"

Automaton::Automaton(string s) : word(s), _state(new State1(this)) {}

void Automaton::setWord(string s) { this->word = s; }
void Automaton::setState(State* s) { this->_state = s; }

string Automaton::getWord() { return this->word; }
State* Automaton::getState() { return this->_state; }
bool Automaton::ProcessWord(string s) {
    return this->getState()->ProcessWordState(s);
}

