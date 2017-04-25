#include "Problem3.h"
#include <iostream>

using namespace std;

void problem3()
{
	cout << "Problem 3:" << endl;
	
	cout << "a." << endl;
	
	int n;
	cout << "Please enter a positive number: ";
	cin >> n;
	printNums(n);
	cout << endl;
	printNumsReverse(n);
	
	cout << endl << endl;
	
	cout << "b." << endl;

	int base, exponent;
	cout << "Please enter a base: ";
	cin >> base;
	cout << "Please enter an exponent: ";
	cin >> exponent;
	cout << "power (" << base << ", " << exponent << ") = " << power(base, exponent) << endl;
	
	cout << endl;

	cout << "c." << endl;

	int num;
	// divisor will be started from 2
	int divisor = 2;
	cout << "Please enter a positive number: ";
	cin >> num;
	if (isPrime(num, divisor))
	{
		cout << num << " is a prime number." << endl;
	}
	else
	{
		cout << num << " is not a prime number." << endl;
	}

	cout << endl << endl;
}

void printNums(int n)
{
	if (n >= 0)
	{
		cout << n << " ";
		printNums(n - 1);
	}
}

void printNumsReverse(int n)
{
	if (n >= 0)
	{
		printNumsReverse(n - 1);
		cout << n << " ";
	}
}

int power(int base, int exponent)
{
	int output;
	if (exponent == 1)
	{
		output = base;
	}
	else
	{
		output = power(base, exponent - 1);
		output *= base;
	}
	return output;
}

bool isPrime(int num, int divisor)
{
	if (divisor == num)
	{
		return true;
	}
	else if (num % divisor == 0)
	{
		return false;
	}
	else if (num % divisor != 0)
	{
		isPrime(num, divisor + 1);
	}
}