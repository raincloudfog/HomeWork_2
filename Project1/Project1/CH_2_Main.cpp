#include<iostream>
#include "CH_2_1_2.h"
#include "CH_2_1_3.h"
#include "CH_2_1_1.h"


using namespace std;

int main() {

#pragma region �ʼ� ����1

    cout << "\n\n\n�ʼ� ���� 1 \n\n\n";

    ////���ø� ����ؼ� int �� ����������ϴ�.
    HomeWork_1<int>* work_1 = new HomeWork_1<int>;

    work_1->Push();
    work_1->Plus();
    work_1->average();

    //HomeWork_1<float>* work_2 = new HomeWork_1<float>;

    //work_2->Push();
    //work_2->Plus();
    //work_2->average();

#pragma endregion


    cout << "\n\n\n���� ���� 2 \n\n\n";

    
    CH_2_1::_Sort* st = new CH_2_1::_Sort();

    cout << "\n\n\n�ʼ� ���� 3 \n\n\n" ;
    
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

    zoo->addAnimal(zoo->createRandomAnimal());
    zoo->addAnimal(zoo->createRandomAnimal());
    zoo->performActions();


    delete zoo;

}