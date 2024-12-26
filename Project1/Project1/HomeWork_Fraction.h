#pragma once
#include <cmath>
#include <iostream>

/*C++로 간단하게 두 분수의 곱셉을 하는 클래스를 만들어 봅시다.

- Fraction 클래스를 만들어 분수를 표현 하세요
    - 분자는 numerator, 분모는 denominator로 관리 합니다.
    - 두 분수의 곱의 결과는 기약분수로 출력 합니다.
- 구현할 메서드
    - 기본 생성자를 만드세요(numerator = 0 / denominator = 1 )
    - 분자의 분모의 수를 입력받는 생성자를 구현하세요
    - 배터리 잔량을 반환하는 메서드
    - 현재 분수를 출력하는 함수 display를 를 구현하세요
    - 기약분수 형태로 만드는 함수 simplify를 구현하세요 
    이 때 최대공약수를 구하는 함수가 필요할 수 있는데 아래를 참조하세요*/

/*// gcd 함수 구현 (유클리드 호제법)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}*/


class HomeWork_Fraction {

public :
    //분자 분모
    HomeWork_Fraction(int num1, int num2) {
        numerator = num1;
        denominator = num2;
        multi = (double)num1 / num2;
        std::cout << multi << std::endl;
        //simplify();
    }

    int gcd(int a, int b) {

        //b가 0이아닐때까지 반복



        while (b != 0) {
            //b를 a와 b를 나눈 나머지값으로 바꿈
            //a는 b의 값으로 바꿈
            // 1/2 , 3/4 
            // .5  %.75

            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    void Multi(HomeWork_Fraction other) {
        //double total = multi * other.GetMulty();
        multi *= other.GetMulty();
        std::cout << GetMulty() <<std::endl; 
        simplify();
    }
        

    double GetMulty() { return multi; }

    void display() {
        std::cout << numerator << " / " << denominator << std::endl;
    }

    void simplify() {

        //욕 아님 소수를 분수로 바꾼다 줄인겁니다.
        //물론 욕나올정도로 수학이 어렵더군요

        // <cmath> 함수를 사용하기 위해
        //소수를 분자로 나누기
        double temp = multi;

        //10씩 곱해줘서 분모와분자로 만들어준다.
        int d = 1;
        while (true)
        {
            if (std::floor(temp) != temp)
            {
                d *= 10;
                temp *= 10;
                std::cout << temp << std::endl;
            }
            else {
                break;
            }
        }

        //최소공약수 구함
        
        //std::cout << gcd(temp, d) << std::endl;
        int fa = (int)temp / gcd(temp, d);
        int fb = (int)d / gcd(temp, d);
        std::cout << fa << " / " << fb << std::endl;


    }

    //접근 지정자 private 다른 클래스에서 접근 불가!
private:
    
    int numerator = 0;
    int denominator = 0;
    double multi = 0;

};


#pragma region 숙제 정답 
/*#include <iostream>
using namespace std;

// Fraction 클래스 정의
// 분수를 표현하고 곱셈 및 단순화 기능을 제공합니다.
class Fraction {
private:
    int numerator;   // 분자
    int denominator; // 분모

    // 최대공약수를 계산하는 유클리드 호제법 구현
    // gcd 함수는 Fraction 클래스 내부에서만 사용되므로 private으로 설정
    int gcd(int a, int b) const {
        while (b != 0) {
            int temp = b; // 현재 b 값을 저장
            b = a % b;    // a를 b로 나눈 나머지를 새로운 b로 설정
            a = temp;     // 이전 b 값을 새로운 a로 설정
        }
        return a; // b가 0이 되었을 때 a가 최대공약수
    }

public:
    // 기본 생성자
    // 분자를 0, 분모를 1로 초기화합니다. (0/1은 0을 나타냄)
    Fraction() : numerator(0), denominator(1) {}

    // 매개변수가 있는 생성자
    // 사용자로부터 분자와 분모를 입력받아 초기화합니다.
    // 분모가 0일 경우 자동으로 1로 설정합니다. (분모가 0이면 정의되지 않음)
    Fraction(int num, int denom) {
        numerator = num;
        denominator = (denom != 0) ? denom : 1; // 분모가 0이면 1로 설정
    }

    // 분수를 간단한 형태로 변환하는 함수
    // 최대공약수(gcd)를 이용해 분자와 분모를 나눕니다.
    void simplify() {
        int gcdValue = gcd(numerator, denominator); // 분자와 분모의 최대공약수 계산
        numerator /= gcdValue;   // 분자를 최대공약수로 나누기
        denominator /= gcdValue; // 분모를 최대공약수로 나누기
    }

    // 두 분수를 곱하는 함수
    // 두 분수를 곱한 새로운 분수를 반환합니다.
    Fraction multiply(const Fraction& other) const {
        // 새로운 분자 = 현재 분수의 분자 * 다른 분수의 분자
        int newNumerator = numerator * other.numerator;

        // 새로운 분모 = 현재 분수의 분모 * 다른 분수의 분모
        int newDenominator = denominator * other.denominator;

        // 새로운 Fraction 객체 생성
        Fraction result(newNumerator, newDenominator);

        // 결과를 간단히 만들기
        result.simplify();

        return result;
    }

    // 분수를 출력하는 함수
    // 분자를 '/' 기호와 함께 출력합니다.
    void display() const {
        cout << numerator << "/" << denominator;
    }
};

int main() {
    // 두 분수 생성
    Fraction f1(1, 2); // 첫 번째 분수: 1/2
    Fraction f2(3, 4); // 두 번째 분수: 3/4

    // 두 분수를 곱하기
    Fraction product = f1.multiply(f2); // f1 * f2

    // 결과 출력
    cout << "곱한 결과: ";
    product.display(); // 결과 분수 출력
    cout << endl;

    return 0;
}
*/
#pragma endregion


