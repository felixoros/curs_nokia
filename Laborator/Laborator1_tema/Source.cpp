#include <iostream>
#include <string>

//Tema Clasa de baza minim 2 derivate, abstracta, virtual destructors
//folosit: - public, protected, private;
//  -constructor default si copy
//In main: Baza *b = new Derivata(); - 10 obiecte D1 si D2
//print ceva specific

class Masina{
	public:
		Masina() {};
		void setNrUsi(int nrUsi) { this->nrUsi = nrUsi; };
		int getNrUsi() { return this->nrUsi; };
		virtual ~Masina() {};
	private:
		int nrUsi;

};

int main() {

	return 0;
}