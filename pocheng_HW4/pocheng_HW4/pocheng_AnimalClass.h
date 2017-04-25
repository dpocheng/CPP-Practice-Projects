#ifndef POCHENG_ANIMALCLASS_H
#define POCHENG_ANIMALCLASS_H

#include<iostream>

using std::string;

class Animal {
public:
	Animal(string name, int weight, int numOfLegs);
	string getName();
	int getWeight();
	int getNumOfLegs();
	void setName(string name);
	void setWeight(int weight);
	void setNumOfLegs(int numOfLegs);
	virtual string getSound() = 0;
	virtual string getDescription() = 0;
private:
	string name;
	int weight;
	int numOfLegs;
};

class Dog : public Animal {
public:
	Dog(string name, int weight, int numOfLegs, int numOfClaws);
	int getNumOfClaws();
	void setNumOfClaws(int numOfClaws);
	virtual string getSound();
	virtual string getDescription();
private:
	int numOfClaws;
};

class Fish : public Animal {
public:
	Fish(string name, int weight, int numOfLegs, int numOfScales);
	int getNumOfScales();
	void setNumOfScales(int numOfScales);
	virtual string getSound();
	virtual string getDescription();
private:
	int numOfScales;
};

class Chicken : public Animal {
public:
	Chicken(string name, int weight, int numOfLegs, int numOfBeaks);
	int getNumOfBeaks();
	void setNumOfBeaks(int numOfBeaks);
	virtual string getSound();
	virtual string getDescription();
private:
	int numOfBeaks;
};

class Spider : public Animal {
public:
	Spider(string name, int weight, int numOfLegs, bool isVenomous);
	bool getIsVenomous();
	void setIsVenomous(bool isVenomous);
	virtual string getSound();
	virtual string getDescription();
private:
	bool isVenomous;
};

#endif