#include <string>
#include < vector>
#include <iostream>

using namespace std;

//기본클래스
class vehicle {

	//접근지정자 protected 상속된 자식 클래스만 사용가능

protected:
    string color;
    int speed;

    //순수가상함수를 포함한 클래스는 그 자체로 변수가 될수 없습니다.(인스턴스화 한다 라고도 합니다.)
        //따라서 변수로 선언시 에러가 발생 합니다.
    //virtual void test1() = 0;


public :
    //생성되었을때  color에는 매개변수 c값 speed에는 s값전달
    vehicle(string c, int s) : color(c), speed(s) {}
    virtual void makeSound() {
        cout << "뿡" << endl;
    }
};



//파생 클래스
class Bicycle : public vehicle
{
    //vehicle의 모든 퍼블릭이 들어있음

private :
    bool hasBasket;

public :
    __override void makeSound() {

    }
    //똑같이 color와 speed값이 들어가고 거기에다가 basket값도 추가로들어감
    Bicycle(string c, int s, bool basket) : vehicle(c, s), hasBasket(basket) {}
};

namespace over
{
    //오버로딩
    //매개변수를 다르게 해서 다르게 사용할 수 있다.



    //int 타입
    void test(int a)
    {
        cout << a << endl;
    }

    //float 타입
    void test(float a)
    {
        cout << a << endl;
    }

    //string 타입
    void test(string a)
    {
        cout << a << endl;
    }

    //2개 더하기
    void test(int a, int b)
    {
        cout << a +b<< endl;
    }
    //3개 더하기
    void test(int a, int b,int c)
    {
        cout << a + b  + c<< endl;
    }


}