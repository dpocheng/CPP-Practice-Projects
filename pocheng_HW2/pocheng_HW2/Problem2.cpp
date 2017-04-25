#include "Problem2.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void problem2()
{
	cout << "Program 2:" << endl;

	// creating a random number
	srand(time(NULL));
	int randomNumber = rand() % 101;
	// guessing game's declaration
	int guessNumber;

	cout << "Please enter a number between 0 - 100 inclusive: ";
	cin >> guessNumber;
	while (guessNumber != randomNumber)
	{
		if (guessNumber > 100 || guessNumber < 0)
		{
			cout << "Invalid range, try again: ";
			cin >> guessNumber;
		}
		else if (guessNumber < randomNumber)
		{
			cout << "Too small, try again: ";
			cin >> guessNumber;
		}
		else if (guessNumber > randomNumber)
		{
			cout << "Too large, try again: ";
			cin >> guessNumber;
		}
	}
	if (guessNumber == randomNumber)
	{
		cout << "That's correct! The number is " << guessNumber << "." << endl;
	}

	cout << endl << endl << endl;
}