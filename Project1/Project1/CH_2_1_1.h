#pragma once

#include <iostream>
#include <memory>

using namespace std;


template<typename T>
class HomeWork_1
{

public:
	//�ʱⰪ 5������ count������ �����ؼ� ��� ���� �ϰ� �� ��
	//�迭�� �ްڴٰ� ����ũ ����������
	unique_ptr<T[]> arr;


	//HomeWork_1<T>() {
		//if (arr == nullptr)
		//{
			//cout << "arr == nullptr" << endl;
		//}
	//}

#pragma region  �̻��� ��� �� �߰�
	//void Push() {
	   // /* �̻��� ���
	   // * �ش� i  : 0
	   //	1.1
	   //	���� i : 0
	   //	�ش� i  : 1
	   //	�ش� ������ �´� �����Է��ϼ���.
	   //	���� i : 0
	   //	�ش� i  : 1

	   //	��°�� cin fail()�� ���� �ݺ������� ĳġ�Ǵ��� ���� �Ұ�
	   //	int����
	   //	1.1 �Է������� �ٷ� ���� ���� �˾Ҵµ� �� �������� �ߴ°���
	   // */


	   // std::cout << "������ �Է��ϼ���: ";
	   // cin >> count;

	   // cout << arr << endl;

	   // //�ʱ�ȭ ����
	   // arr.reset();
	   // arr = make_unique<T[]>(count);


	   // //���Ϲ��� ���������� �õ� �غ��� �;����ϴ�. i--; �� 
	   // for (int i = 0; i < count; i++)
	   // {
	   //	 cout << "�ش� i  : " << i << endl;


	   //	 T num;
	   //	 cin >> num;
	   //	 if (cin.fail())
	   //	 {
	   //		 cout << "�ش� ������ �´� �����Է��ϼ���." << endl;
	   //		 cin.clear(); // �ʱ�ȭ
	   //		 cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	   //		 --i;
	   //		 continue;
	   //	 }
	   //	 else {
	   //		 arr[i] = num;

	   //	 }
	   //	 cout << "���� i : " << i << endl;
	   // }
	//}
#pragma endregion



	void Push() {
		/* �̻��� ���
		* �ش� i  : 0
		   1.1
		   ���� i : 0
		   �ش� i  : 1
		   �ش� ������ �´� �����Է��ϼ���.
		   ���� i : 0
		   �ش� i  : 1

		   ��°�� cin fail()�� ���� �ݺ������� ĳġ�Ǵ��� ���� �Ұ�
		   int����
		   1.1 �Է������� �ٷ� ���� ���� �˾Ҵµ� �� �������� �ߴ°���
		*/


		std::cout << "������ �Է��ϼ���: ";
		cin >> count;

		//cout << arr << endl;

		//�ʱ�ȭ ����
		arr.reset();
		arr = make_unique<T[]>(count);


		//���Ϲ��� ���������� �õ� �غ��� �;����ϴ�. i--; �� 
		for (int i = 0; i < count;)
		{
			cout << "�ش� i  : " << i << endl;


			T num;
			cin >> num;
			if (cin.fail())
			{
				cout << "�ش� ������ �´� �����Է��ϼ���." << endl;
				cin.clear(); // �ʱ�ȭ
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			else {
				arr[i] = num;
				i++;

			}
			//cout << "���� i : " << i << endl;
		}
	}

	//���ϱ� �Լ�
	void Plus() {
		//���� ���� ���µ� �߰��������
		if (arr == nullptr)
		{
			Push();
		}

		cout << "count : " << count << endl;

		total = 0;

		// �迭 �ȿ� ���� �����ֱ� // �ȵǴ� ���� ���� ã�ƺ���
		/*for (T i : arr)
		{
			total += i;
		}*/
		for (int i = 0; i < count; i++)
		{
			total += arr[i];
		}

		cout << "�հ� : " << total << endl;


	}
	//���
	void average() {
		cout << "�հ� : " << total << " ��� : " << (float)total / count << endl;
		aver = (float)total / count;
	}

private:

	//�迭 ũ�� ����
	int count;
	T  total;
	float aver;



};
