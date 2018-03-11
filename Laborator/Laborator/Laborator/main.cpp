#include <iostream>
#include <string>

class Human {
public:
	Human() {};
	void setAge(int age) { this->age = age; };
	int getAge() { return this->age; };
	void setName(std::string name) { this->name = name; };
	std::string getName() { return this->name; };
	~Human() {};
private:
	std :: string name;
	int age;
};

int main() {

	Human * h1 = new Human();
	h1 -> setName("Andrei");
	h1 -> setAge(18);
	Human * h2 = new Human();
	h2 -> setName("Marius");
	h2 -> setAge(20);
	Human * h3 = new Human();
	h3 -> setName("Daniel");
	h3 -> setAge(19);
	Human * h4 = new Human();
	h4 -> setName("Alex");
	h4 -> setAge(16);

	std::cout << h4->getName() << std::endl;
	//Copy constructor
	// Human(const Human& object){this->age = object->age;};
	// Call: Human h2(h1); 
	// Human h2 = h1; // calls copy constructor

	//std :: vector < Type >
	//std :: list < Type >

	return 0;
}