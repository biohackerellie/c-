#include <iostream>
#include <string>

using namespace std;

class Car
{
public:
	string brand;
	string model;
	int year;

	Car(string x, string y, int z);

	void honk()
	{
		cout << "Beep Beep mother fucker!\n";
	}
};

Car::Car(string x, string y, int z)
{
	brand = x;
	model = y;
	year = z;
}

int main()
{
	Car car1("Ford", "Mustang", 1969);
	Car car2("Tesla", "Model S", 2021);

	cout << car1.brand << " " << car1.model << " " << car1.year << "\n";
	cout << car2.brand << " " << car2.model << " " << car2.year << "\n";

	car1.honk();
	car2.honk();

	return 0;
}