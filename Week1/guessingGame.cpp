
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	char playAgain;
	do {
		srand(time(0));
		int randomNumber = rand() % 100 + 1;
		int guess;
		cout << "Guess the number between 1 and 100: ";
		do {
				cin >> guess;

				if(guess < randomNumber) {
					cout << "Too low ";
				} else if(guess > randomNumber) {
					cout << "Too high!! ";
				}
		} while(guess != randomNumber);

		cout << "alright alright you win" << randomNumber<< " was the number" << endl;

		cout << "Do you want to play again? (y/n): ";
		cin >> playAgain;
		} while (playAgain == 'y' || playAgain == 'Y');

	return 0;
} 


