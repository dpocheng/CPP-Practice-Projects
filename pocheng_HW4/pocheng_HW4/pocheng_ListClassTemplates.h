#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::string;

class InvalidIndexException {};
class EmptyListException {};
class FullListException {};

template<class T>
class ListClassTemplate {
public:
	ListClassTemplate();
	~ListClassTemplate();
	T at(int i);
	bool empty();
	T first();
	T last();
	void insert(T item);
	void remove(int i);
private:
	int size;
	T* arrayList;
};

template<class T>
ListClassTemplate<T>::ListClassTemplate() {
	size = 0;
	arrayList = new T[10];
}

template<class T>
ListClassTemplate<T>::~ListClassTemplate() {
	delete[] arrayList;
}

template<class T>
T ListClassTemplate<T>::at(int i) {
	try {
		if (i >= size) {
			throw InvalidIndexException();
		}
		return arrayList[i];
	}
	catch (InvalidIndexException) {
		cout << "There is no element at index " << i << endl;
	}
}

template<class T>
bool ListClassTemplate<T>::empty() {
	if (size == 0) {
		return true;
	}
	return false;
}

template<class T>
T ListClassTemplate<T>::first() {
	try {
		if (size == 0) {
			throw EmptyListException();
		}
		return arrayList[0];
	}
	catch (EmptyListException) {
		cout << "The list is empty" << endl;
	}
}

template<class T>
T ListClassTemplate<T>::last() {
	try {
		if (size == 0) {
			throw EmptyListException();
		}
		return arrayList[size - 1];
	}
	catch (EmptyListException) {
		cout << "The list is empty" << endl;
	}
}

template<class T>
void ListClassTemplate<T>::insert(T item) {
	try{
		if (size == 10) {
			throw FullListException();
		}
		arrayList[size] = item;
		size++;
	}
	catch (FullListException) {
		cout << "The list is full" << endl;
	}
}

template<class T>
void ListClassTemplate<T>::remove(int i) {
	try {
		if (i >= size) {
			throw InvalidIndexException();
		}
		T* tempList = new T[10];
		for (int j = 0, k = 0; j < 10; j++, k++) {
			if (k == 10) { break; }
			if (j == i) {
				k++;
				if (k == 10) { break; }
			}
			tempList[j] = arrayList[k];
		}
		delete[] arrayList;
		arrayList = tempList;
		size--;
	}
	catch (InvalidIndexException) {
		cout << "There is no element at index " << i << endl;
	}
}