#include "pocheng_Problem3.h"
#include "pocheng_Hw3Stack.h"
#include <iostream>
#include <string>

using namespace std;

void Problem3() {
	cout << "Problem 3" << endl;
	// Case 1:
	// Create a stack and print out the correct size / capacity based on user input
	cout << "Case 1:" << endl;
	Hw3Stack s;
	cout << "Stack's Size    : " << s.getSize() << endl;
	cout << "Stack's Capacity: " << s.getCapacity() << endl;
	cout << endl;
	

	// Case2:
	// Test the push, pop, top, isEmpty, and getSize functions for a stack with 0 items
	//  and 2 items in order to demonstrate the current behavior
	cout << "Case2:" << endl;
	stackItem item1 = { "someItem1" };
	stackItem item2 = { "someItem2" };
	// isEmpty() test for stack with 0 items
	if (s.isEmpty() == true && s.getSize() == 0) {
		cout << "isEmpty() test passed for stack with 0 items" << endl;
	}
	else {
		cout << "isEmpty() test failed for stack with 0 items" << endl;
	}

	// top() test for stack with 0 items
	if (s.top().name == "") {
		cout << "top()     test passed for stack with 0 items" << endl;
	}
	else {
		cout << "top()     test failed for stack with 0 items" << endl;
	}

	// pop() test for stack with 0 items
	if (s.pop() == false && s.getSize() == 0) {
		cout << "pop()     test passed for stack with 0 items" << endl;
	}
	else {
		cout << "pop()     test failed for stack with 0 items" << endl;
	}

	// push() test
	s.push(item1);
	s.push(item2);
	if (s.isEmpty() == false && s.getSize() == 2){
		cout << "push()    test passed for stack with 0 items" << endl;
	}
	else {
		cout << "push()    test failed for stack with 0 items" << endl;
	}

	// isEmpty() test for stack with 2 items
	if (s.isEmpty() == false && s.getSize() != 0) {
		cout << "isEmpty() test passed for stack with 2 items" << endl;
	}
	else {
		cout << "isEmpty() test failed for stack with 2 items" << endl;
	}

	// top() test for stack with 2 items
	if (s.top().name == "someItem2") {
		cout << "top()     test passed for stack with 2 items" << endl;
	}
	else {
		cout << "top()     test failed for stack with 2 items" << endl;
	}

	// pop() test for stack with 2 items
	if (s.pop() == true && s.pop() == true && s.isEmpty() == true && s.getSize() == 0 && s.top().name == "") {
		cout << "pop()     test passed for stack with 2 items" << endl;
	}
	else {
		cout << "pop()     test failed for stack with 2 items" << endl;
	}
	cout << endl;

	// Case 3:
	// Test the case where push creates a new array with double the capacity
	// double capacity test
	cout << "Case 3:" << endl;
	int beforeCapacity = s.getCapacity();
	for (int num = 0; num < beforeCapacity; num++) {
		if (num % 2 == 0)
			s.push(item1);
		else
			s.push(item2);
	}
	int afterCapacity = s.getCapacity();
	if (afterCapacity == beforeCapacity * 2) {
		cout << "Double capacity test passed for stack" << endl;
	}
	else {
		cout << "Double capacity test failed for stack" << endl;
	}
	cout << endl;

	// Case 4:
	// Test the copy constructor by creating a copy of a current Hw3Stack object and printing the
	//  elements, size, and capacity.
	cout << "Case 4:" << endl;
	Hw3Stack copiedStack(s);
	if (s.getSize() == copiedStack.getSize() && s.getCapacity() == copiedStack.getCapacity()) {
		cout << "Copy constructor test passed for stack" << endl;
	}
	else {
		cout << "Copy constructor test failed for stack" << endl;
	}
	cout << "Stack's Size    : " << copiedStack.getSize() << endl;
	cout << "Stack's Capacity: " << copiedStack.getCapacity() << endl;
	cout << "Stack's elements:"  << endl;
	copiedStack.printStack();
}