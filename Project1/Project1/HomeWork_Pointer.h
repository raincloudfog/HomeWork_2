#pragma once
#include <iostream>
using namespace std;

class MyClass {
private:
    int* ptr;

public:
    // 생성자
    MyClass() {
        ptr = new int(10); // 동적 메모리 할당
        cout << "메모리 할당 완료!" << endl;
    }

    // 소멸자
    ~MyClass() {
        //이부분에서 delete해주어야됨
        //해지 하지않으면 이 클래스가 사라져도 메모리는 할당되어 있는 상태
        delete ptr;
    }

    void print() const {
        cout << "값: " << *ptr << endl;
    }
};

//int main() {
//    MyClass obj;
//    obj.print();
//
//    // main 함수 종료
//    return 0;
//}