#include <iostream>

class Animal {
public:
	virtual void setLegs() = 0;
	virtual int getLegs() = 0;
	virtual ~Animal() {};
};

class Lion : public Animal {
public:
	Lion() {};
	void setLegs() { this->legs = 4; };
	int getLegs() { return this->legs; };
	virtual ~Lion() {};
private:
	int legs;
};

class Fish : public Animal {
public:
	Fish() {};
	void setLegs() { this->legs = 0; }
	int getLegs() { return this->legs; };
	virtual ~Fish() {};
private:
	int legs;
};

int main() {
	Fish *f1 = new Fish();
	Lion *l1 = new Lion();

	f1->setLegs();
	std::cout << f1->getLegs() << std::endl;

	l1->setLegs();
	std::cout << l1->getLegs() << std::endl;
}

//Tema Clasa de baza minim 2 derivate, abstracta, virtual destructors
//folosit: - public, protected, private;
//  -constructor default si copy
//In main: Baza *b = new Derivata(); - 10 obiecte D1 si D2
//print ceva specific