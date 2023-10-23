#include "Animals.h"

Animal::Animal(string n, int a, double w) : name(n), age(a), weight(w) {}

void Animal::makeSound() {
	cout << "Makes a generic Sound" << endl;
}

void Animal::move() {
	cout << "Moves in a generic way" << endl;
}

Bird::Bird(string n, int a, double w, string f) : Animal(n, a, w), featherColor(f) {};

void Bird::makeSound() {
	cout << "Chirp Chirp" << endl;
}

void Bird::move() {
	cout << "The Bird Flies. " << endl;
}

Dog::Dog(string n, int a, double w, string b, string c) : Animal(n, a, w), breed(b), color(c) {};

void Dog::makeSound() {
	cout << "Woof Woof" << endl;
}