#ifndef POCHENG_HW3STACK_H
#define POCHENG_HW3STACK_H

#include <iostream>

struct stackItem {
	// arbitrary name to identify item
	std::string name;
};

class Hw3Stack {
public:
	// Default constructor that prompts the user for the stack
	//calacity, initializes the stack with the capacity, and sets
	// the size to zero.
	Hw3Stack();

	// Copy constructor that takes a current stack and copies the
	// current size, capacity, and stackItems into the current
	// object.
	Hw3Stack(Hw3Stack& stack);

	// Destructor that deletes the stack
	~Hw3Stack();

	// Returns true if there are no items in stack, false otherwise.
	bool isEmpty();

	// Return the current size of Hw3Stack.
	int getSize();

	// Return the current capacity of the stack.
	int getCapacity();

	// Adds the stackItem to the stack. If the stack size is equal to
	// the capacity after insertion, copy all of the current
	// stackItems into a new array with double the current capacity
	// and set the current stack array to the new array.
	void push(stackItem item);

	// Remove the top stackItem. Returns true if successful. Return
	// false otherwise (i.e. if the stack is empty).
	bool pop();

	//Returns the top stackItem, but does not remove it.
	stackItem top();

	// Prints the stack contents' names from top to bottom.
	void printStack();

private:
	int capacity; // capacity of the stack
	int size; // current size of the stack
	stackItem* stack; // pointer to the array stack
};

#endif