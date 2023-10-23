#include <string>
#include <vector>
#include "../Animals/Animals.h"


using namespace std;

#ifndef ZOO_H
#define ZOO_H

class Zoo {
private:
	vector<Animal*> animals;


public:
	void addAnimal(Animal* animal);

	void removeAnimal(int index);

	void makeAllSounds();

	void moveAllAnimals();
};
#endif