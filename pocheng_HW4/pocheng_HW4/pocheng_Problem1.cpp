#include<iostream>
#include<string>
#include"pocheng_Problem1.h"
#include"pocheng_ListClassTemplates.h"

using std::cout;
using std::endl;
using std::string;

void Problem1() {
	// Problem 1b
	cout << "Problem 1b" << endl;
	ListClassTemplate<int> list;
	cout << "-> Testing empty list" << endl;
	// testing at(int i) with empty case
	cout << "--> at(int i)" << endl;
	list.at(0);
	// testing empty() with empty case
	cout << endl << "--> empty()" << endl;
	if (list.empty()) {
		cout << "The list is empty" << endl;
	}
	else {
		cout << "The list is not empty" << endl;
	}
	// testing first()
	cout << endl << "--> first()" << endl;
	list.first();
	// testing last()
	cout << endl << "--> last()" << endl;
	list.last();
	// testing remove(int i)
	cout << endl << "--> remove(int i)" << endl;
	list.remove(0);
	
	// adding element into list
	// testing insert(T item)
	cout << endl << "-> Testing inserting" << endl;
	cout << "--> insert(T item)" << endl << endl;
	list.insert(1);
	list.insert(2);
	list.insert(3);
	list.insert(4);
	list.insert(5);
	list.insert(6);
	list.insert(7);
	list.insert(8);
	list.insert(9);
	list.insert(10);

	// testing if the list is full
	cout << "-> Testing inserting with a full list" << endl;
	list.insert(11);

	// testing all functions when list has some value inside
	cout << endl << "-> Testing functions with a non-empty list" << endl;
	cout << "--> at(int i)" << endl;
	cout << "The value at index 3 in the list is " << list.at(3) << endl;

	cout << endl << "--> empty()" << endl;
	if (list.empty()) {
		cout << "The list is empty" << endl;
	}
	else {
		cout << "The list is not empty" << endl;
	}

	cout << endl << "--> first()" << endl;
	cout << "The first element in the list is " << list.first() << endl;

	cout << endl << "--> last()" << endl;
	cout << "The last element in the list is " << list.last() << endl;

	// testing remove(int i)
	cout << endl << "-> Testing remove(int i) with a full list" << endl;
	cout << "--> 1st remove(8)" << endl;
	list.remove(8);
	cout << "--> 2nd remove(8)" << endl;
	list.remove(8);
	cout << "--> 3rd remove(8)" << endl;
	list.remove(8);

	cout << endl << endl;
}