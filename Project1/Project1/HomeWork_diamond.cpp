#include "HomeWork_diamond.h"
#include <iostream>

//using namespace std;

//����Լ� �ܺο��� ����
void diamond::TextDiamond() {
	
	//���̾Ƹ���� ���� ��ŭ 2�� �����ش�.
	//1 3 5 7 9 ...
	// n * 2 -1�� �ؼ� �߰����� ���� �ϳ��� �پ����Ѵ�.
	// ���� ó�� ��ġ�� n�� ��ġ�� �� ���� ����
	// 1�� n ��ġ * ,2�� n-1��ġ���� ���� ���� ...


	int num = (floor * 2) - 1;
	int dot = 1;
	int space = floor -1;

	for (int i = 0; i < num; i++)
	{			

		for (int j = space; j > 0; j--)
		{
			//n��° ���� ����

			std::cout << " ";
		}

		for (int k = 1; k <= dot; k++)
		{
			//1������ ���� 2���� �þ �׸��� 1 + (2 * n)��ŭ Ŀ���� ��ž
			std::cout << "*";
		}

		std::cout << std::endl;


		if (i  >= floor -1)
		{
			// n�� ��ġ���� �����ϸ� dot�� ����
			//0 1 2 3 4 .. ���̴ϱ� floor�� 0 1 2 3 4..������ ��������� -1����.
			dot -= 2;
			space++;
		}
		else {
			// n�� �������� �������� ����
			dot += 2;
			space--;
		}
	}


}