#include "zoo.h"

void Zoo::addAnimal(Animal* animal) {
	animals.push_back(animal);
}

void Zoo::removeAnimal(int index) {
	if (index >= 0 && index < animals.size()) {
		animals.erase(animals.begin() + index);
	}
	else {
		cout << "Invalid index\n";
	}
}

void Zoo::makeAllSounds() {
	for (Animal* animal : animals) {
		animal->makeSound();
	}
}

void Zoo::moveAllAnimals() {
	for (Animal* animal : animals) {
		animal->move();
	}
}