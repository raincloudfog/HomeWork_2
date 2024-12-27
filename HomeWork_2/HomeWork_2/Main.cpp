#include<iostream>
#include "CH_2_1_3.h"



using namespace std;

int main() {


    cout << "\n\n\n�ʼ� ���� 3 \n\n\n";

    /*���� �Լ����� Animal Ÿ���� ������ �迭�� �����ϰ� Dog, Cat, Cow�� ���� �迭�� ���ҷ� �����մϴ�.
        �� ���� Animal �迭�� �ݺ������� ��ȸ�ϸ鼭 �� ������ �����Ҹ��� ���� �մϴ�!*/

        //���� ���� ���� �Լ��� �ִµ� �迭�� ��� ���� �� ������
        //Animal* animal[3]�̹���� �ȴ�.. ���� ��� �ٽ� ����


        //Animal* animal = new Animal[3];
        //�̷��� ���� �޸� ���ٵ�.. new �� ����� �ƴϴϱ�
        //�׷��� ��� ���� new ���� ���� ���ٸ���
        //�ڲ� ����Ҷ� : animal�� �Ѵ�.. public animal�� �ؾߵȴµ�
    Animal* animal[3]{ new Dog(), new Cat(), new Cow };

    for (Animal* i : animal)
    {
        i->makeSound();
    }

    cout << "\n\n\n���� ���� 4 \n\n\n";

    Zoo* zoo = new Zoo();

    for (int i = 0; i < 10; i++)
    {
        zoo->addAnimal(zoo->createRandomAnimal());
    }

    zoo->performActions();

    //�߰��ҽ� �迭ũ�� ����
    zoo->addAnimal(zoo->createRandomAnimal());
    zoo->addAnimal(zoo->createRandomAnimal());
    for (int i = 0; i < 10; i++)
    {
        zoo->addAnimal(zoo->createRandomAnimal());
    }
    zoo->performActions();


    delete zoo;

}