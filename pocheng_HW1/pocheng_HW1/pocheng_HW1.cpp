#include <iostream>
#include <string>

int main()
{
	// Problem 1
	std::cout << "Problem 1" << std::endl;
	std::cout << "Hello, my name is PokOn Cheng." << std::endl;
	std::cout << "My student ID is 74157306." << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	// Problem 2
	std::cout << "Problem 2" << std::endl;
	std::string firstName;
	std::string lastName;
	std::string studentID;
	int characterCount = 0;
	std::cout << "Please enter your first name: ";
	std::getline(std::cin, firstName);
	characterCount += firstName.length();
	std::cout << "Please enter your last name: ";
	std::getline(std::cin, lastName);
	characterCount += lastName.length();
	std::cout << "Please enter your student ID: ";
	std::getline(std::cin, studentID);
	std::cout << std::endl;
	std::cout << "Hello " << firstName << " " << lastName << "! Your student ID is " << studentID << "." << std::endl;
	std::cout << "Your first and last name has " << characterCount << " characters." << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	// Problem 3
	std::cout << "Problem 3" << std::endl;
	const double pi = 3.14159;
	double radius;
	double perimeter;
	double area;
	std::cout << "Please enter a circle's radius: ";
	std::cin >> radius;
	std::cin.clear();
	std::cin.ignore(0);
	perimeter = 2 * pi * radius;
	area = pi * radius * radius;
	std::cout << "The circle's perimeter is " << perimeter << std::endl;
	std::cout << "The circle's area is " << area << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}