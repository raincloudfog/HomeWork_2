#pragma once
#include <iostream>


//클래스 생성
class diamond
{

	//접근지정자 public 다른곳에서 꺼낼수 있음 
public:
	//생성자
	diamond(int num) {
		
		if (num <= 0)
		{
			std::cout << "0보다작으니 1로 바꾸겠다" << std::endl;
			
		}
		//삼항연산자? 사용
		floor = num <= 0 ? 1 : num;
	}

	//몇층짜리로 만들것인지.
	//정하는 정수
	int floor = 0;

	void TextDiamond();
	


};


#pragma region 다이아몬드 숙제 해설
/*
* #include <iostream>
using namespace std;

int main() {
    int n;

    // 사용자로부터 입력 받기
    //양수인지 확인하는 것
    cout << "다이아몬드의 크기를 입력하세요 (양의 정수): ";
    cin >> n;

    // 입력값 검증
    if (n <= 0) {
        cout << "잘못된 입력입니다. 양의 정수를 입력하세요." << endl;
        return 1;
    }

    // 다이아몬드 상단 출력
    for (int i = 1; i <= n; ++i) {
        // 공백 출력
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        // 별 출력
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }
        cout << endl; // 줄 바꿈
    }

    // 다이아몬드 하단 출력
    for (int i = n - 1; i >= 1; --i) {
        // 공백 출력
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        // 별 출력
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }
        cout << endl; // 줄 바꿈
    }

    return 0;
}

//상단 하단 따로 출력 함. 음수인경우 정수로바꿔버림

*/
#pragma endregion