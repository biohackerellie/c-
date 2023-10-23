
#include <iostream>
#include <string>

using namespace std;

#ifndef ANIMALS_H
#define ANIMALS_H

class Animal {
public:
	string name;
	int age;
	double weight;

	Animal(string n, int a, double w);

	virtual void makeSound();

	virtual void move();

};

class Bird : public Animal {
public:
	string featherColor;

	Bird(string n, int a, double w, string f);

	void makeSound() override;
	void move() override;
};


class Dog : public Animal {
public:
	string breed;
	string color;

	Dog(string n, int a, double w, string b, string c);

	void makeSound() override;
	void move() override;
};

#endif