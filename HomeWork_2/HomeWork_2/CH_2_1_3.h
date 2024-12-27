#pragma once
#include <iostream>
#include "Observer.h"
using namespace std;




//기본적으로 옵저버 패턴 느낌 나는 것 같음.

class Animal {

protected:
	

public:
	Animal() = default;

	string name;
	//순수 가상 함수
	virtual void  makeSound() = 0;


	~Animal() {
		cout << "해당 "<< name <<  " 은(는) 쉬러 갔다 " << endl;
	};
};

class  Dog : public Animal {
public :

	Dog() 
	{
		name = "개";
	}

	void makeSound() override {
		cout << "댕댕" << endl;
		
	}
		
		
};

class  Cat :public  Animal {
public:
	Cat()
	{
		name = "고양이";
	}
	void makeSound() override {
		cout << "떼껄룩" << endl;
	}
};

class  Cow : public Animal {
public:
	Cow()
	{
		name = "소";
	}
	void makeSound() override {
		cout << "소가 울부짖었다" << endl;
	}
};



//- zoo 클래스 내에 animals 배열이 있으며, 해당 배열의 크기가 제한 
// - 배열에 새로운 항목을 추가할 때, 제한된 크기를 고려하여 배열의
// 크기를 동적으로 확장하거나 적절히 처리하는 예외 사항이 반영되었는지 확인



class Zoo {
private:
	//배열의 크기가 10으로 제한 되어있다
	int count = 10;

	//이렇게 동적 할당도니 포인터배열의 요소는 기본적으로 초기화 되지않고  값은 무작위라함
	Animal** animals = new Animal* [count]; // 동물 객체를 저장하는 포인터 배열


	//배열 교체
	void ChangePoint();
	void ChangePoint(Animal*** origin);
public:

	Zoo() {
		for (int i = 0; i < count; i++)
		{
			animals[i] = nullptr;
		}
	}

	// 동물을 동물원에 추가하는 함수
	// - Animal 객체의 포인터를 받아 포인터 배열에 저장합니다.
	// - 같은 동물이라도 여러 번 추가될 수 있습니다.
	// - 입력 매개변수: Animal* (추가할 동물 객체)
	// - 반환값: 없음
	// attach
	void addAnimal(Animal* animal);

	// 동물원에 있는 모든 동물의 행동을 수행하는 함수
	// - 모든 동물 객체에 대해 순차적으로 소리를 내고 움직이는 동작을 실행합니다.
	// - 입력 매개변수: 없음
	// - 반환값: 없음
	// notify
	void performActions();

	// Zoo 소멸자
	// - Zoo 객체가 소멸될 때, 동물 벡터에 저장된 모든 동물 객체의 메모리를 해제합니다.
	// - 메모리 누수를 방지하기 위해 동적 할당된 Animal 객체를 `delete` 합니다.
	// - 입력 매개변수: 없음
	// - 반환값: 없음

	

	
	Animal* createRandomAnimal() {

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



	~Zoo();
};

// 랜덤 동물을 생성하는 함수
	// - 0, 1, 2 중 하나의 난수를 생성하여 각각 Dog, Cat, Cow 객체 중 하나를 동적으로 생성합니다.
	// - 생성된 객체는 Animal 타입의 포인터로 반환됩니다.
	// - 입력 매개변수: 없음
	// - 반환값: Animal* (생성된 동물 객체의 포인터)
