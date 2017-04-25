#include "pocheng_Hw3Stack.h"
#include <string>

Hw3Stack::Hw3Stack() {
	std::cout << "Please enter the capacity for the stack: ";
	while (std::cin >> capacity) {
		if (capacity > 0) {
			break;
		}
		else {
			std::cout << "Error, please re-enter the capacity for the stack that is bigger than 0: ";
			continue;
		}
	}
	stack = new stackItem[capacity];
	size = 0;
}

Hw3Stack::Hw3Stack(Hw3Stack& stack) {
	capacity = stack.getCapacity();
	size = stack.getSize();
	this->stack = new stackItem[capacity];
	for (int num = 0; num < size; num++) {
		this->stack[num] = stack.stack[num];
	}
}

Hw3Stack::~Hw3Stack() {
	// std::cout << "Inside the destructor" << this << std::endl;
	delete[] stack;
}

bool Hw3Stack::isEmpty() {
	if (size == 0)
		return true;
	return false;
}

int Hw3Stack::getSize() {
	return size;
}

int Hw3Stack::getCapacity() {
	return capacity;
}

void Hw3Stack::push(stackItem item) {
	stack[size] = item;
	size++;
	if (size == capacity) {
		capacity *= 2;
		stackItem* tempStack = new stackItem[capacity];
		for (int num = 0; num < size; num++) {
			tempStack[num] = stack[num];
		}
		delete[] stack;
		stack = tempStack;
		
	}
}

bool Hw3Stack::pop() {
	if (isEmpty()) {
		return false;
	}
	else {
		stack[size - 1].name = "";
		size--;
		return true;
	}
}

stackItem Hw3Stack::top() {
	if (size != 0)
		return stack[size - 1];
	else
		return stack[0];
}

void Hw3Stack::printStack() {
	for (int num = size - 1; num >= 0; num--) {
		std::cout << stack[num].name << std::endl;
	}
}