#include "Problem1.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <iostream>

using namespace std;

void problem1()
{
	cout << "Problem 1:" << endl;

	// triangle's declaration
	int base, height;
	// rectangle's declaration
	int length, width;
	// circle's declaration
	int radius;
	
	// base's input
	cout << "Please enter the triangle's base: ";
	cin >> base;
	while (base <= 0)
	{
		cout << "Please enter a positive value: ";
		cin >> base;
	}
	// height's input
	cout << "Please enter the triangle's height: ";
	cin >> height;
	while (height <= 0)
	{
		cout << "Please enter a positive value: ";
		cin >> height;
	}
	// length's input
	cout << "Please enter the rectangle's length: ";
	cin >> length;
	while (length <= 0)
	{
		cout << "Please enter a positive value: ";
		cin >> length;
	}
	// width's input
	cout << "Please enter the rectangle's width: ";
	cin >> width;
	while (width <= 0)
	{
		cout << "Please enter a positive value: ";
		cin >> width;
	}
	// radius's input
	cout << "Please enter the circle's radius: ";
	cin >> radius;
	while (radius <= 0)
	{
		cout << "Please enter a positive value: ";
		cin >> radius;
	}

	// area's calculation
	cout << "Area of triangle is " << triangle(base, height) << endl;
	cout << "Area of rectangle is " << rectangle(length, width) << endl;
	cout << "Area of circle is " << circle(radius) << endl;

	cout << endl << endl << endl;
}