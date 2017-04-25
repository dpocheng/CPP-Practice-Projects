#include"pocheng_Problem2.h"
#include"pocheng_ListClassTemplates.h"
#include"pocheng_AnimalClass.h"

void Problem2() {
	cout << "Problem 2b" << endl;

	ListClassTemplate<Animal*> animalList;
	
	Dog dog1("Collie", 70, 4, 20);
	Dog dog2("Pug", 16, 4, 18);
	Dog dog3("Belgian Malinois", 63, 4, 22);
	Fish fish1("Carp", 80, 0, 9875);
	Fish fish2("Tigerfish", 150, 0, 37540);
	Fish fish3("Atlantic Croaker", 5, 0, 5849);
	Chicken chicken1("Australorp", 8, 2, 1);
	Chicken chicken2("Orpington", 4, 2, 1);
	Spider spider1("Black Widow Spider", 1, 8, true);
	Spider spider2("Uloboridae", 1, 8, false);
	
	Animal* animal1 = &dog1;
	Animal* animal2 = &dog2;
	Animal* animal3 = &dog3;
	Animal* animal4 = &fish1;
	Animal* animal5 = &fish2;
	Animal* animal6 = &fish3;
	Animal* animal7 = &chicken1;
	Animal* animal8 = &chicken2;
	Animal* animal9 = &spider1;
	Animal* animal10 = &spider2;
	
	animalList.insert(animal1);
	animalList.insert(animal2);
	animalList.insert(animal3);
	animalList.insert(animal4);
	animalList.insert(animal5);
	animalList.insert(animal6);
	animalList.insert(animal7);
	animalList.insert(animal8);
	animalList.insert(animal9);
	animalList.insert(animal10);
	
	for (int num = 0; num < 10; num++) {
		cout << animalList.at(num)->getDescription() << endl;
	}	
}