#include<iostream>
#include "CH_2_1_3.h"



using namespace std;

int main() {


    cout << "\n\n\n필수 과제 3 \n\n\n";

    /*메인 함수에서 Animal 타입의 포인터 배열을 선언하고 Dog, Cat, Cow를 각각 배열의 원소로 선언합니다.
        → 이후 Animal 배열을 반복문으로 순회하면서 각 동물의 울음소리를 내게 합니다!*/

        //흐음 순수 가상 함수가 있는데 배열을 어떻게 만들 수 있을까
        //Animal* animal[3]이방식은 된다.. 선언 방식 다시 볼것


        //Animal* animal = new Animal[3];
        //이러면 스택 메모리 일텐데.. new 로 만든건 아니니까
        //그런데 요소 들은 new 들어가니 흐음 좀다른가
        //자꾸 상속할때 : animal로 한다.. public animal로 해야된는데
    Animal* animal[3]{ new Dog(), new Cat(), new Cow };

    for (Animal* i : animal)
    {
        i->makeSound();
    }

    cout << "\n\n\n도전 과제 4 \n\n\n";

    Zoo* zoo = new Zoo();

    for (int i = 0; i < 10; i++)
    {
        zoo->addAnimal(zoo->createRandomAnimal());
    }

    zoo->performActions();

    //추가할시 배열크기 조절
    zoo->addAnimal(zoo->createRandomAnimal());
    zoo->addAnimal(zoo->createRandomAnimal());
    for (int i = 0; i < 10; i++)
    {
        zoo->addAnimal(zoo->createRandomAnimal());
    }
    zoo->performActions();


    delete zoo;

}