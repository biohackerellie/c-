#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
	string name;
	int age;
	double weight;

	Animal(string n, int a, double w) : name(n), age(a), weight(w) {}

	virtual void makeSound() {
		cout << "Moo" << endl;
	}

	virtual void move() {
		cout << "the anime moves in some way. " << endl;
	}
};