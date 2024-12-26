#include <iostream>

using namespace std;



//아래 3개의 함수를 하나의 템플릿 함수로 통합하세요
//int add(int a, int b) {
//    return a + b;
//}
//
//double add(double a, double b) {
//    return a + b;
//}
//
//std::string add(const std::string& a, const std::string& b) {
//    return a + b;
//}

template<typename T>
T add(T a, T b)
{
    return a + b;
}

//아래 테스트 코드는 변역하지 마세요
int main() {
    // 정수 더하기
    cout << "3 + 5 = " << add(3, 5) << endl;

    // 실수 더하기
    cout << "2.5 + 4.3 = " << add(2.5, 4.3) << endl;

    // 문자열 합치기
    cout << "\"Hello, \" + \"World!\" = " << add(string("Hello, "), string("World!")) << endl;

    // 아래 코드는 컴파일 에러가 발생해야 함
    // cout << add(true, false) << endl;

    return 0;
}