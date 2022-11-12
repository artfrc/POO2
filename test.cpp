#include <bits/stdc++.h>
using namespace std;

class Carro {
protected:
	double custo;
	string descricao;

public:
	double getCusto() { return this->custo; }
	string getDescricao() { return this->descricao; }
	void setCusto(double custo) { this->custo = custo; }
	void setDescricao(string s) { this->descricao = s; }
};

class Voyage : public Carro {
public:
	Voyage() {
		this->setCusto(60000);
		this->setDescricao("Voyage");
	}
};

class Decorator : public Carro {
protected:
	Carro* decorado;

public:
	Decorator(Carro* decorado) {
		this->decorado = decorado;
	}

	double getCusto() {
		return decorado->getCusto() + Carro::getCusto();
	}

	string getDescricao() {
		return decorado->getDescricao() + ", " + Carro::getDescricao();
	}

};

class arCondicionado : public Decorator {
public:
	arCondicionado(Carro* decorator) : Decorator { decorator } {
		setCusto(900+getCusto());
		setDescricao(getDescricao()+"Ar");
	}
};

int main() {

	Carro* carro = new Voyage();

	cout << carro->getDescricao() << " ";
	cout << carro->getCusto() << endl;


	carro = new arCondicionado(carro);

	cout << carro->getDescricao() << " ";
	cout << carro->getCusto() << endl;

}
