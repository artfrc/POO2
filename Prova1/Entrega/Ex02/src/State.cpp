#include "State.h"

State::State(Automaton* _aut) : _automaton(_aut) {}

void State::setAutomaton(Automaton* aut) { this->_automaton = aut; }

Automaton* State::getAutomaton() { return this->_automaton; }

State1::State1(Automaton* _aut) : State { _aut } {}

bool State1::ProcessWordState(string s) {
    cout << ">> State: " << typeid(this).name() << endl;
    if(s[0] == 'a') {
        this->getAutomaton()->setState(new State2(this->_automaton));
        s.erase(0,1);
        cout << s << endl;
        this->getAutomaton()->setWord(s);
        return true;
    } else {
        cout << ">> Fail!" << endl;
        return false;
    }
}

State2::State2(Automaton* _aut) : State { _aut } {}

bool State2::ProcessWordState(string s) {
    cout << ">> State: " << typeid(this).name() << endl;
    if(s[0] == 'a') {
        s.erase(0,1);
        cout << s << endl;
        this->getAutomaton()->setWord(s);
        return true;
    } else if(s[0] == 'b'){
        this->getAutomaton()->setState(new State1(this->_automaton));
        s.erase(0,1);
        cout << s << endl;
        this->getAutomaton()->setWord(s);
        return true;
    } else if(s[0] == 'c') {
        this->getAutomaton()->setState(new State4(this->_automaton));
        s.erase(0,1);
        cout << s << endl;
        this->getAutomaton()->setWord(s);
        if(this->getAutomaton()->getWord().empty()) {
            cout << ">> Success!" << endl;
            return false;
        }
        return true;
    } else {
        cout << ">> Fail!" << endl;
        return false;
    }
}

State3::State3(Automaton* _aut) : State { _aut } {}

bool State3::ProcessWordState(string s) {
    cout << ">> State: " << typeid(this).name() << endl;
    if(s[0] == 'a') {
        this->getAutomaton()->setState(new State1(this->_automaton));
        s.erase(0,1);
        cout << s << endl;
        this->getAutomaton()->setWord(s);
        return true;
    } else if(s[0] == 'b'){
        this->getAutomaton()->setState(new State4(this->_automaton));
        s.erase(0,1);
        cout << s << endl;
        this->getAutomaton()->setWord(s);
        if(this->getAutomaton()->getWord().empty()) {
            cout << ">> Success!" << endl;
            return false;
        }
        return true;
    } else {
        cout << ">> Fail!" << endl;
        return false;
    }
}

State4::State4(Automaton* _aut) : State { _aut } {}

bool State4::ProcessWordState(string s) {
    cout << ">> State: " << typeid(this).name() << endl;
    if(s[0] == 'd'){
        this->getAutomaton()->setState(new State3(this->_automaton));
        s.erase(0,1);
        cout << s << endl;
        this->getAutomaton()->setWord(s);
        return true;
    } else {
        cout << ">> Fail!" << endl;
        return false;
    }
}
