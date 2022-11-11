#include <bits/stdc++.h>
using namespace std;

class Shield {
private:
	Shield* next;
	
public:
	void setNext(Shield* next) {
		this->next = next;
	}

	Shield* getNext() {
		return this->next;
	}

	virtual int processShield(int value) = 0;

};

class weakShield : public Shield {
public:
	int processShield(int value) {
		int reduced = value*0.25;
		int rest = value-reduced;
		cout << "Weak shield called! Damage reduced: " << reduced << endl;
		if(rest != 0 && getNext() != nullptr)
			getNext()->processShield(rest);
		else
			return rest;
	}
};

class mediumShield : public Shield {
public:
	int processShield(int value) {
		int reduced = value*0.45;
		int rest = value-reduced;
		cout << "Medium shield called! Damage reduced: " << reduced << endl;
		if(rest != 0 && getNext() != nullptr)
			getNext()->processShield(rest);
		else
			return rest;
	}
};

class strongShield : public Shield {
public:
	int processShield(int value) {
		int reduced = value*0.75;
		int rest = value-reduced;
		cout << "Strong shield called! Damage reduced: " << reduced << endl;
		if(rest != 0 && getNext() != nullptr)
			getNext()->processShield(rest);
		else
			return rest;	
	}
};

class Character {
public:
	int life;
	Shield* sh;
	Character() : life(100) {
		this->sh = nullptr;
	}
	takeShield(Shield* s) {
		if(this->sh == nullptr) {
			this->sh = s;
			//this->sh->setNext(nullptr);
		} else {
			this->sh->setNext(s);
		}
	}
	takeDamage(int value) {
		if(this->sh != nullptr) {
			value = this->sh->processShield(value);
		}
		this->life -= value;
	}

};

int main() {

	Shield* weak = new weakShield();
	Shield* medium = new mediumShield();
	Shield* strong = new strongShield();

	weak->setNext(medium);
	medium->setNext(strong);
	strong->setNext(nullptr);

	Character* c = new Character();

	if(c->sh == nullptr) cout << "Not sh" << endl;
	else	  cout << "Yes sh" << endl;

	c->takeShield(new weakShield());
	c->takeShield(new strongShield());
	c->takeDamage(20);

	cout << "Life: " << c->life << endl;
	cout << "Life: " << c->life << endl;

	if(c->sh == nullptr) cout << "Not sh" << endl;
	else				 cout << "Yes sh" << endl;



/*

	weak->processShield(100);
*/
}
