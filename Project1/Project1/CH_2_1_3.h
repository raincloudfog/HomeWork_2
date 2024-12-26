#pragma once
#include <iostream>
#include "Observer.h"
using namespace std;




//�⺻������ ������ ���� ���� ���� �� ����.

class Animal {

protected:
	

public:
	Animal() = default;

	string name;
	//���� ���� �Լ�
	virtual void  makeSound() = 0;


	~Animal() {
		cout << "�ش� "<< name <<  " ��(��) ���� ���� " << endl;
	};
};

class  Dog : public Animal {
public :

	Dog() 
	{
		name = "��";
	}

	void makeSound() override {
		cout << "���" << endl;
		
	}
		
		
};

class  Cat :public  Animal {
public:
	Cat()
	{
		name = "�����";
	}
	void makeSound() override {
		cout << "������" << endl;
	}
};

class  Cow : public Animal {
public:
	Cow()
	{
		name = "��";
	}
	void makeSound() override {
		cout << "�Ұ� ���¢����" << endl;
	}
};



//- zoo Ŭ���� ���� animals �迭�� ������, �ش� �迭�� ũ�Ⱑ ���� 
// - �迭�� ���ο� �׸��� �߰��� ��, ���ѵ� ũ�⸦ ����Ͽ� �迭��
// ũ�⸦ �������� Ȯ���ϰų� ������ ó���ϴ� ���� ������ �ݿ��Ǿ����� Ȯ��



class Zoo {
private:
	//�迭�� ũ�Ⱑ 10���� ���� �Ǿ��ִ�
	int count = 10;

	//�̷��� ���� �Ҵ絵�� �����͹迭�� ��Ҵ� �⺻������ �ʱ�ȭ �����ʰ�  ���� ����������
	Animal** animals = new Animal* [count]; // ���� ��ü�� �����ϴ� ������ �迭


	//�迭 ��ü
	void ChangePoint();
	void ChangePoint(Animal*** origin);
public:

	Zoo() {
		for (int i = 0; i < count; i++)
		{
			animals[i] = nullptr;
		}
	}

	// ������ �������� �߰��ϴ� �Լ�
	// - Animal ��ü�� �����͸� �޾� ������ �迭�� �����մϴ�.
	// - ���� �����̶� ���� �� �߰��� �� �ֽ��ϴ�.
	// - �Է� �Ű�����: Animal* (�߰��� ���� ��ü)
	// - ��ȯ��: ����
	// attach
	void addAnimal(Animal* animal);

	// �������� �ִ� ��� ������ �ൿ�� �����ϴ� �Լ�
	// - ��� ���� ��ü�� ���� ���������� �Ҹ��� ���� �����̴� ������ �����մϴ�.
	// - �Է� �Ű�����: ����
	// - ��ȯ��: ����
	// notify
	void performActions();

	// Zoo �Ҹ���
	// - Zoo ��ü�� �Ҹ�� ��, ���� ���Ϳ� ����� ��� ���� ��ü�� �޸𸮸� �����մϴ�.
	// - �޸� ������ �����ϱ� ���� ���� �Ҵ�� Animal ��ü�� `delete` �մϴ�.
	// - �Է� �Ű�����: ����
	// - ��ȯ��: ����

	

	
	Animal* createRandomAnimal() {

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



	~Zoo();
};

// ���� ������ �����ϴ� �Լ�
	// - 0, 1, 2 �� �ϳ��� ������ �����Ͽ� ���� Dog, Cat, Cow ��ü �� �ϳ��� �������� �����մϴ�.
	// - ������ ��ü�� Animal Ÿ���� �����ͷ� ��ȯ�˴ϴ�.
	// - �Է� �Ű�����: ����
	// - ��ȯ��: Animal* (������ ���� ��ü�� ������)
