#include "CH_2_1_3.h"
#include <ctime>






void Zoo::addAnimal(Animal* animal) {

	//sizeof : 변수나 데이터 타입의 크기를 바이트 단위로 반환!! 
	//즉 배열의 크기 / 배열의 타입(배열 첫 번째가 가지고 있는 크기)
	
	 // 꽉 차 있을 때 더 넣으면
	if (animals[count - 1] != nullptr) {
		cout << "동물 수 넘어감 " << count << endl;
		ChangePoint(); // ChangePoint 호출
	}

	for (int i = 0; i < count; i++)
	{
		if (animals[i] == nullptr)
		{
			animals[i] = animal;
			break;
		}		
	}

}

void Zoo::performActions() {
	

	

	/*for (Animal** i : *animals)
	{
		i->makeSound();
	}*/

	int a = 0;

	for (int i = 0; i < count; i++)
	{
		if (animals[i] != nullptr)
		{
			animals[i]->makeSound();
			a++;
		}
	}
	cout << "현재 동물 수 : " << a << endl;

}

Zoo::~Zoo() {

	/*for (Animal* i : animals)
	{
		delete i;
	}*/
	for (int i = 0; i < count; i++)
	{
		delete animals[i];
	}
}





void Zoo::ChangePoint() {
	count += 5;


	std::shared_ptr<Animal**> test = make_shared<Animal**>(animals);

	Animal** tempanimals = new Animal * [count];

	// std::shared_ptr의 use_count() 메서드는 해당 shared_ptr가 관리하는 객체에 대한 참조 카운트만을 반환 
	// 일반 포인터는 shared_ptr와 연결되어 있지 않으므로, 참조 카운트에 영향을 미치지 않음.
	//cout << "animals 포인터가 지금 몇 개의 포인터가 보는지 확인. : " << test.use_count() << endl;


	for (int i = 0; i < count; i++)
	{
		tempanimals[i] = nullptr;
	}

	//기존에 있던 것 만큼 넣어주기
	//아설마 내가 했던 코드에서 count -5 를 안해줘서 animls가 10까지 밖에없지만 
	// 임의의 값 5개를 temp에 넣어서 animals는 10개지만 temp에 10개 + 임의의값 15개 를
	// 넣어줬으니까 addanimal에서 !=nullptr에서 자꾸 걸린거구나?


	//for (int i = 0; i < count; i++) -5를 안해주고 하니 버그가 생길 수밖에없었던거야
	//  1000원 있는 놈한태 1500원 달라는 격이니까 신개념 삥뜯기를 했던것

	for (int i = 0; i < count-5; i++)
	{
		tempanimals[i] = animals[i];
	}

	delete[] animals;

	//흐음 데이터가 진짜 로 삭제 되었는지 확인할 방법을 모르겠음 삭제된다음 건들면 댕글링 포인터가 

	animals = tempanimals;

	
}



#pragma region 짜증나는 과거의 코드


//!! 중요 !! 혹시몰라서 코드 확인해보니 Animal**과 animal* 호환 문제  빨간줄 뜸 
// <틀림>    생각해보니 Animal* a[10]이니까 포인터 == 배열 인 상태에서 포인터[] != 배열이 맞긴한듯함. 
// <틀림>    즉 이건 Animal[][] 인 그 뭐시냐 2차원 배열이 됨.
// 정정 이건2차원 배열이아님 포인터가 ==배열인 것도 아님
// Animal* 이것은 포인터 배열로 주소들의 배열 이고 일반 배열은 값을 저장하는 것
void  Zoo::ChangePoint(Animal*** origin) {



	//배열의 크기를 5씩 늘려주려함

	//사이즈 구하기방식 사용하면 0이 나올 수도 있어서 그런지 안됨.
	//주소를 저장하고 있으니 주소를 한번 더 꺼내기
	//Animal* tempanimals[size];



	//배열 초기화 다시 복습
	//char chArray[10];
	//char* pch = chArray;   // Evaluates to a pointer to the first element.
	//char   ch = chArray[0];   // Evaluates to the value of the first element.
	//ch = chArray[3];   // Evaluates to the value of the fourth element.
	// 배열의 크기만 되어도 저렇게 복사 시키는데

	//변하지 않는 상수는 가능
	//Animal* tempanimals[15];
	//그리고 추상클래스라 일반 초기화 안됨. 즉 초기화 방법은 Animal* a [] 방식뿐임	
	//Animal* tempanimals = new Animal[10];

	count += 5;

	//동적 이란 것이 힙 영역을 지칭하는게 아니였나
	// 응? 엉? 엥? 혹시나 해서 했더니 됨.. // 현재 사이즈 + 5 // * 는 안되는거 확인 0 을 곱할 수가 있어서 그런듯함
	//Animal* tempanimals[size +5];
	Animal** tempanimals = new Animal * [count];
	for (int i = 0; i < count; i++)
	{
		tempanimals[i] = nullptr;
	}

	//Animal** 이 가르키는건 배열의 주소일 것으로 예상됨(animal를 가르키는 * 를 가르키는 *...)(값의 주소의 주소를 가르킴)


	for (int i = 0; i < count; i++)
	{
		//포인터는 주소가 담겨야됨 //배열이 주는건 값임 그러므로 주소값으로 변환 해서 주는것
		//여기서 내 예상 이거는 깊은 복사가아닌 얕은 복사임 그러므로 delete해주면안됨
		//깊은 복사는 공유가 아닌 그 주소를 복사하는것이아닌 값을 복사하는 것이므로 

		tempanimals[i] = (*origin)[i];

		//그러므로 nullptr해주려함
		//origin[i] = 배열 인 셈이 될 것이라 예상				

		//*origin[i] = nullptr;


	}
	// 새로운 포인터 배열로 변경
	//delete[] * origin; // 원래 포인터 배열 메모리 해제

	//origin = new Animal **(tempanimals);


	for (int i = 0; i < count; i++)
	{
		//cout << "해당 " << animals[i] << endl;
		if ((*origin)[i] == nullptr)
		{
			cout << 16 << endl;
		}
		else {
			cout << i << endl;
		}
		//else {
			//cout << "해당 " << i << " 인덱스 번호에 주소 참조 되어있음. " << (*animals[i)] << endl;
		//} 출력 연산자 오버로딩 필요
	}



}
#pragma endregion







