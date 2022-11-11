#include <bits/stdc++.h>

using namespace std;

class Saque {
protected:
    Saque* successor;

public:
    void setSuccessor(Saque* successor) {
        this->successor = successor;
    }

    Saque* getSuccessor() {
        return this->successor;
    }

    virtual void processSaque(int value) = 0;
};

class Saque100 : public Saque {
    void processSaque(int value) override{
        int notas = value/100;
        int rest = value%100;

        if(notas != 0)
            cout << "Notas 100: " << notas << endl;

        if(rest != 0 && getSuccessor() != nullptr)
            getSuccessor()->processSaque(rest);
    }
};

class Saque50 : public Saque {
    void processSaque(int value) override{
        int notas = value/50;
        int rest = value%50;

        if(notas != 0)
            cout << "Notas 50: " << notas << endl;

        if(rest != 0 && getSuccessor() != nullptr)
            getSuccessor()->processSaque(rest);
    }
};

class Saque20 : public Saque {
    void processSaque(int value) override{
        int notas = value/20;
        int rest = value%20;

        if(notas != 0)
            cout << "Notas 20: " << notas << endl;

        if(rest != 0 && getSuccessor() == nullptr)
            cout << "Nao ha notas de " << rest << endl;
    }
};

int main(void) {

    Saque* saque100 = new Saque100();
	Saque* saque50 = new Saque50();
	Saque* saque20 = new Saque20();

	saque100->setSuccessor(saque50);
	saque50->setSuccessor(saque20);
	saque20->setSuccessor(nullptr);

	saque100->processSaque(575);


}
