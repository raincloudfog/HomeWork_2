#include "CH_2_1_3.h"
#include <ctime>






void Zoo::addAnimal(Animal* animal) {

	//sizeof : ������ ������ Ÿ���� ũ�⸦ ����Ʈ ������ ��ȯ!! 
	//�� �迭�� ũ�� / �迭�� Ÿ��(�迭 ù ��°�� ������ �ִ� ũ��)
	
	 // �� �� ���� �� �� ������
	if (animals[count - 1] != nullptr) {
		cout << "���� �� �Ѿ " << count << endl;
		ChangePoint(); // ChangePoint ȣ��
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
	cout << "���� ���� �� : " << a << endl;

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

	// std::shared_ptr�� use_count() �޼���� �ش� shared_ptr�� �����ϴ� ��ü�� ���� ���� ī��Ʈ���� ��ȯ 
	// �Ϲ� �����ʹ� shared_ptr�� ����Ǿ� ���� �����Ƿ�, ���� ī��Ʈ�� ������ ��ġ�� ����.
	//cout << "animals �����Ͱ� ���� �� ���� �����Ͱ� ������ Ȯ��. : " << test.use_count() << endl;


	for (int i = 0; i < count; i++)
	{
		tempanimals[i] = nullptr;
	}

	//������ �ִ� �� ��ŭ �־��ֱ�
	//�Ƽ��� ���� �ߴ� �ڵ忡�� count -5 �� �����༭ animls�� 10���� �ۿ������� 
	// ������ �� 5���� temp�� �־ animals�� 10������ temp�� 10�� + �����ǰ� 15�� ��
	// �־������ϱ� addanimal���� !=nullptr���� �ڲ� �ɸ��ű���?


	//for (int i = 0; i < count; i++) -5�� �����ְ� �ϴ� ���װ� ���� ���ۿ��������ž�
	//  1000�� �ִ� ������ 1500�� �޶�� ���̴ϱ� �Ű��� ���⸦ �ߴ���

	for (int i = 0; i < count-5; i++)
	{
		tempanimals[i] = animals[i];
	}

	delete[] animals;

	//���� �����Ͱ� ��¥ �� ���� �Ǿ����� Ȯ���� ����� �𸣰��� �����ȴ��� �ǵ�� ��۸� �����Ͱ� 

	animals = tempanimals;

	
}



#pragma region ¥������ ������ �ڵ�


//!! �߿� !! Ȥ�ø��� �ڵ� Ȯ���غ��� Animal**�� animal* ȣȯ ����  ������ �� 
// <Ʋ��>    �����غ��� Animal* a[10]�̴ϱ� ������ == �迭 �� ���¿��� ������[] != �迭�� �±��ѵ���. 
// <Ʋ��>    �� �̰� Animal[][] �� �� ���ó� 2���� �迭�� ��.
// ���� �̰�2���� �迭�̾ƴ� �����Ͱ� ==�迭�� �͵� �ƴ�
// Animal* �̰��� ������ �迭�� �ּҵ��� �迭 �̰� �Ϲ� �迭�� ���� �����ϴ� ��
void  Zoo::ChangePoint(Animal*** origin) {



	//�迭�� ũ�⸦ 5�� �÷��ַ���

	//������ ���ϱ��� ����ϸ� 0�� ���� ���� �־ �׷��� �ȵ�.
	//�ּҸ� �����ϰ� ������ �ּҸ� �ѹ� �� ������
	//Animal* tempanimals[size];



	//�迭 �ʱ�ȭ �ٽ� ����
	//char chArray[10];
	//char* pch = chArray;   // Evaluates to a pointer to the first element.
	//char   ch = chArray[0];   // Evaluates to the value of the first element.
	//ch = chArray[3];   // Evaluates to the value of the fourth element.
	// �迭�� ũ�⸸ �Ǿ ������ ���� ��Ű�µ�

	//������ �ʴ� ����� ����
	//Animal* tempanimals[15];
	//�׸��� �߻�Ŭ������ �Ϲ� �ʱ�ȭ �ȵ�. �� �ʱ�ȭ ����� Animal* a [] ��Ļ���	
	//Animal* tempanimals = new Animal[10];

	count += 5;

	//���� �̶� ���� �� ������ ��Ī�ϴ°� �ƴϿ���
	// ��? ��? ��? Ȥ�ó� �ؼ� �ߴ��� ��.. // ���� ������ + 5 // * �� �ȵǴ°� Ȯ�� 0 �� ���� ���� �־ �׷�����
	//Animal* tempanimals[size +5];
	Animal** tempanimals = new Animal * [count];
	for (int i = 0; i < count; i++)
	{
		tempanimals[i] = nullptr;
	}

	//Animal** �� ����Ű�°� �迭�� �ּ��� ������ �����(animal�� ����Ű�� * �� ����Ű�� *...)(���� �ּ��� �ּҸ� ����Ŵ)


	for (int i = 0; i < count; i++)
	{
		//�����ʹ� �ּҰ� ��ܾߵ� //�迭�� �ִ°� ���� �׷��Ƿ� �ּҰ����� ��ȯ �ؼ� �ִ°�
		//���⼭ �� ���� �̰Ŵ� ���� ���簡�ƴ� ���� ������ �׷��Ƿ� delete���ָ�ȵ�
		//���� ����� ������ �ƴ� �� �ּҸ� �����ϴ°��̾ƴ� ���� �����ϴ� ���̹Ƿ� 

		tempanimals[i] = (*origin)[i];

		//�׷��Ƿ� nullptr���ַ���
		//origin[i] = �迭 �� ���� �� ���̶� ����				

		//*origin[i] = nullptr;


	}
	// ���ο� ������ �迭�� ����
	//delete[] * origin; // ���� ������ �迭 �޸� ����

	//origin = new Animal **(tempanimals);


	for (int i = 0; i < count; i++)
	{
		//cout << "�ش� " << animals[i] << endl;
		if ((*origin)[i] == nullptr)
		{
			cout << 16 << endl;
		}
		else {
			cout << i << endl;
		}
		//else {
			//cout << "�ش� " << i << " �ε��� ��ȣ�� �ּ� ���� �Ǿ�����. " << (*animals[i)] << endl;
		//} ��� ������ �����ε� �ʿ�
	}



}
#pragma endregion







