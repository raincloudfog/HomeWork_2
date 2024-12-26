#include "HomeWork_diamond.h"
#include "HomeWork_Bettery.h"
#include "HomeWork_Fraction.h"
#include "HomeWork_Virtual.h"
#include "HomeWork_Pointer_2.h"
#include "CH_2_1_1.h"
#include <vector>
#include <algorithm> 
#include "HomeWork_STL.h"









/// <summary>
/// 실행할 곳
/// </summary>
/// <returns></returns>
/*int main()
{

#pragma region 숙제 1 다이아몬드
    ////스택 에서 저장있는 상태
    //diamond a(3);

    ////동적으로 저장되어있는 상태
    ////new class를 사용하려면 무조건 포인터여야됨 아니면 빨간줄뜸
    ////diamond d = new diamond(4);
    //diamond* d = new diamond(2);

    ////정적일경우 클래스에서 함수사용시 . 붙힘
    ////a.TextDiamond();

    ////동적일경우 클래스에서 함수사용시 -> 붙힘 (포인트이니까 포인터 쓰는듯함)
    //d->TextDiamond();

    //delete d;
#pragma endregion

#pragma region 숙제2 배터리

    Bettery* bettery = new Bettery();
    bettery->Bettery_Use();
    bettery->Bettery_Use();
    bettery->Bettery_Charge();
    bettery->Bettery_Use();
    delete bettery;


#pragma endregion


#pragma region 숙제3 분수 곱셈
    HomeWork_Fraction f1(1 , 2);
    HomeWork_Fraction f2(3, 4);

    f1.display();
    f1.Multi(f2);


#pragma endregion


#pragma region  숙제4상속, 추상클래스
    //포인터 어드벤쳐로 만듬 
    // 이유 : 포인터로 안만들고 만들려하면 추상클래스객체는 일반적인 변수로 사용할 수없다고 나옴
    // 포인터로 사용가능한 이유 : 
    // 내 생각이지만 추상클래스자체는 어차피 포인터로 받을수도 없음
    // 그러므로 포인터로 받을 거는 파생클래스들 뿐임 
    // 파생 클래스는 추상클래스에 있는 변수를 이미 구현했다는 전제가 있으니 괜찮은 것 같음.

    //Adventure* ad;
    ////Adventure a;
    //
    //Adventure* adarray[] = { new Warror() , new Mage() ,new Archer() };
    // 새로운 동적 클래스 (객체를 만들어줌)
    // 이러면 같은 클래스를 여러개 가 되는건지 확인 해볼 것

    Warror aaa;
    Warror aa;
    Warror* W = new Warror();
    Mage* m = new Mage();
    Archer* archer = new Archer();


    //이렇게 사용하는것 같은 포문
    //해당 배열에 있는 것을 순환 한다는 뜻으로 이해함
    //for (Adventure* i  : adarray)
    //{
    //    ad = i;
    //    ad->useSkill();

    //    //ad 에 값을 다시 초기화 해줌 delete를 하면 제거 되는거니까 
    //    //ad만 주소값 초기화 시켜줌. 즉 아직 adarray에 있는 데이터들은 남아있음.
    //    ad = nullptr; 
    //}


#pragma endregion

#pragma region  숙제5 포인터 
    ////헤더파일과 네임스페이스를 햇갈렸었음 
    //Pointer_2::MyClass* myclass = new Pointer_2::MyClass();

    ////아래함수가 있어야 myclass 내부에 유니크 함수가 사라지면서 발생할 소멸자 코드도 발생함 왜지..
    ////std::cout << "머여" << std::endl;    
    ////delete myclass;
#pragma endregion




#pragma region 숙제 6 stl반복자

//흐음 정답 코드를 보니 
//vector<int>::const_iterator 이런걸 사용했었음 한번 검색해볼것
//stlstl* aabb = new stlstl();

//가능하면 디버그창 에서 한문제씩 보고 넘어갈때마다 지우는 기능 있는것도 좋을  것같지만 필수 숙제만 
//주석 해제하는 거로 마무리
#pragma endregion



 return 0;


}
*/




