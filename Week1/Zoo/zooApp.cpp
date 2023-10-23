#include <iostream>
#include <string>
#include "classes/zoo/zoo.h"


int main() {
	Zoo myZoo;

	Bird tweety("Tweety", 3, 0.5, "Yellow");
	Animal genericAnimal("Generic", 10, 100);
	Dog fido("Fido", 5, 20, "Lab", "Brown");

	myZoo.addAnimal(&tweety);
	myZoo.addAnimal(&genericAnimal);
	myZoo.addAnimal(&fido);

	std::cout << "All animals making sounds: \n";
	myZoo.makeAllSounds();

	std::cout << "\nAll animals moving: \n";
	myZoo.moveAllAnimals();

	return 0;
}