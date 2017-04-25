#include "Problem4.h"
#include <iostream>
#include <math.h>

using namespace std;

void problem4()
{
	cout << "Problem 4:" << endl;

	int correct = 0, incorrect = 0;
	int answer1, answer2, answer3, answer4;
	cout << "Welcome to our math quiz program! Please enter the answers to the following questions:" << endl;
	
	cout << "5! = ";
	cin >> answer1;
	if (answer1 == (5 * 4 * 3 * 2 * 1))
	{
		correct++;
	}
	else
	{
		incorrect++;
	}

	cout << "(2^(2^(2^2))) = ";
	cin >> answer2;
	if (answer2 == (pow(2,pow(2,pow(2,2)))))
	{
		correct++;
	}
	else
	{
		incorrect++;
	}

	cout << "3 * (4 + 8) / ((4 * 2) / (5 - 1)) = ";
	cin >> answer3;
	if (answer3 == (3 * (4 + 8) / ((4 * 2) / (5 - 1))))
	{
		correct++;
	}
	else
	{
		incorrect++;
	}

	cout << "log10(1000) = ";
	cin >> answer4;
	if (answer4 == (log10(1000)))
	{
		correct++;
	}
	else
	{
		incorrect++;
	}

	cout << "Number of correct answers: " << correct << endl;
	cout << "Number of incorrect answers: " << incorrect << endl;
	cout << "Quiz percentage: " << correct * 100 / 4 << "%" << endl;

	cout << endl << endl;
}