#include "HomeWork_diamond.h"
#include <iostream>

//using namespace std;

//멤버함수 외부에서 구현
void diamond::TextDiamond() {
	
	//다이아몬드의 층수 만큼 2씩 더해준다.
	//1 3 5 7 9 ...
	// n * 2 -1을 해서 중간에서 부터 하나씩 줄어들게한다.
	// 별의 처음 위치는 n의 위치에 서 부터 시작
	// 1층 n 위치 * ,2층 n-1위치에서 부터 시작 ...


	int num = (floor * 2) - 1;
	int dot = 1;
	int space = floor -1;

	for (int i = 0; i < num; i++)
	{			

		for (int j = space; j > 0; j--)
		{
			//n번째 까지 띄어쓰기

			std::cout << " ";
		}

		for (int k = 1; k <= dot; k++)
		{
			//1개에서 부터 2개씩 늘어남 그리고 1 + (2 * n)만큼 커지면 스탑
			std::cout << "*";
		}

		std::cout << std::endl;


		if (i  >= floor -1)
		{
			// n층 위치까지 도달하면 dot은 감소
			//0 1 2 3 4 .. 순이니까 floor도 0 1 2 3 4..순으로 만들기위해 -1해줌.
			dot -= 2;
			space++;
		}
		else {
			// n층 도달하지 못했으니 증가
			dot += 2;
			space--;
		}
	}


}