#include "CH_2_1_4.h"
#include <ctime>


Animal* Zoo::createRandomAnimal() {

	//이렇게 나눠줘서 0부터 2사이 의 값을 반환
	int a = rand() % 3;

	switch (a)
	{
	case 0: 
		return new Dog;
	case 1:
		return new Cat;
	case 2:
		return new Cow;
	default:
		break;
	}


	//임시
	return new Dog;
}



void Zoo::addAnimal(Animal* animal) {


}

void Zoo::performActions() {

	for (Animal* i : animals)
	{
		i->makeSound();
	}

}

