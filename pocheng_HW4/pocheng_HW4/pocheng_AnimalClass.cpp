#include<string>
#include"pocheng_AnimalClass.h"

using std::string;
using std::to_string;

Animal::Animal(string name, int weight, int numOfLegs) {
	this->name = name;
	this->weight = weight;
	this->numOfLegs = numOfLegs;
}

string Animal::getName() {
	return name;
}

int Animal::getWeight() {
	return weight;
}

int Animal::getNumOfLegs() {
	return numOfLegs;
}

void Animal::setName(string name) {
	this->name = name;
}

void Animal::setWeight(int weight) {
	this->weight = weight;
}

void Animal::setNumOfLegs(int numOfLegs) {
	this->numOfLegs = numOfLegs;
}

Dog::Dog(string name, int weight, int numOfLegs, int numOfClaws) : Animal(name, weight, numOfLegs) {
	this->numOfClaws = numOfClaws;
}

int Dog::getNumOfClaws() {
	return numOfClaws;
}

void Dog::setNumOfClaws(int numOfClaws) {
	this->numOfClaws = numOfClaws;
}

string Dog::getSound() {
	return "Barking~";
}

string Dog::getDescription() {
	return "Dog     - Name: " + getName() + "\tWeight: " + to_string(getWeight()) + "\tNumOfLegs: " + to_string(getNumOfLegs()) + "\n\t  NumOfClaws: " + to_string(numOfClaws) + "\tSound: " + getSound();
}

Fish::Fish(string name, int weight, int numOfLegs, int numOfScales) : Animal(name, weight, numOfLegs) {
	this->numOfScales = numOfScales;
}

int Fish::getNumOfScales() {
	return numOfScales;
}

void Fish::setNumOfScales(int numOfScales) {
	this->numOfScales = numOfScales;
}

string Fish::getSound() {
	return "Fishing~";
}

string Fish::getDescription() {
	return "Fish    - Name: " + getName() + "\tWeight: " + to_string(getWeight()) + "\tNumOfLegs: " + to_string(getNumOfLegs()) + "\n\t  NumOfScales: " + to_string(numOfScales) + "\tSound: " + getSound();
}

Chicken::Chicken(string name, int weight, int numOfLegs, int numOfBeaks) : Animal(name, weight, numOfLegs) {
	this->numOfBeaks = numOfBeaks;
}

int Chicken::getNumOfBeaks() {
	return numOfBeaks;
}

void Chicken::setNumOfBeaks(int numOfBeaks) {
	this->numOfBeaks = numOfBeaks;
}

string Chicken::getSound() {
	return "Crowing~";
}

string Chicken::getDescription() {
	return "Chicken - Name: " + getName() + "\tWeight: " + to_string(getWeight()) + "\tNumOfLegs: " + to_string(getNumOfLegs()) + "\n\t  NumOfBeaks: " + to_string(numOfBeaks) + "\t\tSound: " + getSound();
}

Spider::Spider(string name, int weight, int numOfLegs, bool isVenomous) : Animal(name, weight, numOfLegs) {
	this->isVenomous = isVenomous;
}

bool Spider::getIsVenomous() {
	return isVenomous;
}

void Spider::setIsVenomous(bool isVenomous) {
	this->isVenomous = isVenomous;
}

string Spider::getSound() {
	return "Howling~";
}

string Spider::getDescription() {
	string venomous;
	if (getIsVenomous()) {
		venomous = "true";
	}
	else {
		venomous = "false";
	}
	return "Spider  - Name: " + getName() + "\tWeight: " + to_string(getWeight()) + "\tNumOfLegs: " + to_string(getNumOfLegs()) + "\n\t  IsVenomous: " + venomous + "\tSound: " + getSound();
}