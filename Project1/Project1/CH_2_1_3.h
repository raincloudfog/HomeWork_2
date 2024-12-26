#pragma once
#include <iostream>

using namespace std;






	class Animal {

	public:
		Animal() = default;

		//¼ø¼ö °¡»ó ÇÔ¼ö
		virtual void  makeSound() = 0;

		~Animal() {
			cout << "ÇØ´ç µ¿¹°Àº ½¬·¯ °¬´Ù" << endl;
		};
	};

	class  Dog : public Animal {
	public :

		Dog() { };

		void makeSound() override {
			cout << "´ó´ó" << endl;
		}
		
		
	};

	class  Cat :public  Animal {
	public:
		void makeSound() override {
			cout << "¶¼²¬·è" << endl;
		}
	};

	class  Cow : public Animal {
	public:
		void makeSound() override {
			cout << "¼Ò°¡ ¿ïºÎÂ¢¾ú´Ù" << endl;
		}
	};

