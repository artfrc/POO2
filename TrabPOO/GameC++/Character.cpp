#include <iostream>
#include <string>

using namespace std;

/*==============/
/   Class jump  /
/*=============*/

class Jump {
public:
    virtual void jump() = 0;
};

class lowJump:public Jump {
public:
    void jump() { cout << "Low jump!" << endl; }
};

class mediumJump:public Jump {
public:
    void jump() { cout << "Medium jump!" << endl; }
};

class highJump:public Jump {
public:
    void jump() { cout << "High jump!" << endl; }
};

/*==============/
/   Class run  /
/*=============*/

class Run {
public:
    virtual void run() = 0;
};

class slowRun:public Run {
    void run() { cout << "Slow run!" << endl; }
};

class mediumRun:public Run {
    void run() { cout << "Medium run!" << endl; }
};

class fastRun:public Run {
    void run() { cout << "Fast run!" << endl; }
};

/*==============/
/ Class attack  /
/*=============*/

class Attack {
public:
    virtual void attack() = 0;
};

class weakAttack:public Attack {
public:
    void attack() { cout << "Weak attack!" << endl; }
};

class mediumAttack:public Attack {
public:
    void attack() { cout << "Medium attack!" << endl; }
};

class strongAttack:public Attack {
public:
    void attack() { cout << "Strong attack!" << endl; }
};

/*=================/
/  Class Character /
/*================*/

class Character {
private:
    string name;
    int id;
    Jump* jump;
    Run* run;
    Attack* attack;

public:
    Character(string theName, int theId) : name(theName), id(theId){
        this->jump = nullptr;
        this->run = nullptr;
        this->attack = nullptr;
    }


    string getName() {
        return this->name;
    }

    void setName(string newName) {
        this->name = newName;
    }

    int getId() {
        return this->id;
    }

    Jump * getJump() {
        return this->jump;
    }

    void setJump(Jump * newJump) {
        this->jump = newJump;
    }

    void jumping(){
        jump->jump();
    }

    Run * getRun() {
        return this->run;
    }

    void setRun(Run * newRun) {
        this->run = newRun;
    }

    void running() {
        run->run();
    }

    Attack * getAttack() {
        return this->attack;
    }

    void * setAttack(Attack * newAttack) {
        this->attack = newAttack;
    }

    void attacking() {
        attack->attack();
    }

};

/*=================/
/ Class Character1 /
/*================*/

class Character1:public Character {
public:
    Character1(string name, int id) : Character{name, id}{
        setJump(new mediumJump());
        setRun(new mediumRun());
        setAttack(new strongAttack());
    }
};

/*=================/
/ Class Character2 /
/*================*/

class Character2:public Character {
public:
    Character2(string name, int id) : Character{name, id}{
        setJump(new highJump());
        setRun(new fastRun());
        setAttack(new mediumAttack());
    }
};

/*=================/
/ Class Character3 /
/*================*/

class Character3:public Character {
public:
    Character3(string name, int id) : Character{name, id}{
        setJump(new lowJump());
        setRun(new fastRun());
        setAttack(new strongAttack());
    }
};
