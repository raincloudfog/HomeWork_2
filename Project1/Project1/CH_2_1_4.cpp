#include "CH_2_1_4.h"
#include <ctime>


Animal* Zoo::createRandomAnimal() {

	//�̷��� �����༭ 0���� 2���� �� ���� ��ȯ
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


	//�ӽ�
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

