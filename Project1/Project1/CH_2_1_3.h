#pragma once
#include <iostream>

using namespace std;






	class Animal {

	public:
		Animal() = default;

		//���� ���� �Լ�
		virtual void  makeSound() = 0;

		~Animal() {
			cout << "�ش� ������ ���� ����" << endl;
		};
	};

	class  Dog : public Animal {
	public :

		Dog() { };

		void makeSound() override {
			cout << "���" << endl;
		}
		
		
	};

	class  Cat :public  Animal {
	public:
		void makeSound() override {
			cout << "������" << endl;
		}
	};

	class  Cow : public Animal {
	public:
		void makeSound() override {
			cout << "�Ұ� ���¢����" << endl;
		}
	};

