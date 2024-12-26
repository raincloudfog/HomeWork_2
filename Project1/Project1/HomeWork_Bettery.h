#pragma once
#include <iostream>

using namespace std;

/*
* - 기능
- 배터리 잔량(0~100)을 관리 합니다.
- 배터리 사용 및 충전을 할 수 있어야 하니다.
- 초기 배터리는 0 입니다.
- 구현할 메서드
    - 배터리 잔량을 반환하는 메서드
    - 배터리를 사용하는 메서드(한번 호출될때마다 배터리 잔량은 5씩 감소)
    - 배터리를 충전하는 메서드(한번 호출될떄마다 배터리 잔량은 7씩 충전)
- 초기 상태
    - 배터리 잔량의 기본값은 100 입니다. 해당 값은 생성자에서 설정할 수 있어야 합니다.

    [배터리 관리 클래스 시나리오]
1. 프로그램 시작 시, 초기 배터리 잔량은 100%로 설정됩니다.
2. 배터리를 두 번 사용하여 각 사용 시 5%씩 잔량이 감소합니다.
   - 첫 번째 사용 후 잔량: 95%
   - 두 번째 사용 후 잔량: 90%
3. 배터리를 한 번 충전하여 7% 잔량이 증가합니다.
   - 충전 후 잔량: 97%
4. 다시 배터리를 한 번 사용하여 잔량이 5% 감소합니다.
   - 사용 후 잔량: 92%
5. 각 단계에서 배터리 잔량의 변화가 출력됩니다.

위 시나리오대로 실행했을 때 출력 값은 아래와 같습니다.

Initial charge: 100%
Battery used. Current charge: 95%
Battery used. Current charge: 90%
Battery charged. Current charge: 97%
Battery used. Current charge: 92%


    */


class Bettery {




public :

    //초기 0
    int Bettery_life = 0;

    Bettery() {
        Bettery_life = 100;
        std::cout << "Initial charge: " << Bettery_life << endl;

        

    }

    //멤버 함수 내부 구현
    void Bettery_Charge() {
        
        //배터리 충전
        Bettery_life = Bettery_life + 7 >= 100 ?
            100 : Bettery_life + 7;
        cout << "Battery charged. Current charge: " << Bettery_life << endl;

    }

    void Bettery_Use() {

        //배터리 소모
        Bettery_life = Bettery_life - 5 <= 0 ?
            0 : Bettery_life - 5;
        cout << "Battery used. Current charge : " << Bettery_life << endl;

    }
    


};

#pragma region 숙제2 배터리 해설 
/*#include <iostream>

class Battery {
private:
    int charge; // 배터리 잔량

public:
    // 생성자: 기본값은 100으로 설정
    Battery(int initialCharge = 100) : charge(initialCharge) {
        if (charge < 0) {
            charge = 0;
        } else if (charge > 100) {
            charge = 100;
        }
    }

    // 배터리 잔량 반환
    int getCharge() const {
        return charge;
    }

    // 배터리를 사용하여 잔량 감소
    void useBattery() {
        if (charge >= 5) {
            charge -= 5;
        } else {
            charge = 0;
        }
        std::cout << "Battery used. Current charge: " << charge << "%\n";
    }

    // 배터리를 충전하여 잔량 증가
    void chargeBattery() {
        if (charge <= 93) {
            charge += 7;
        } else {
            charge = 100;
        }
        std::cout << "Battery charged. Current charge: " << charge << "%\n";
    }
};

int main() {
    // 배터리 객체 생성 (초기 잔량 100)
    Battery battery;

    std::cout << "Initial charge: " << battery.getCharge() << "%\n";

    // 배터리 사용 및 충전 테스트
    battery.useBattery(); // 잔량 95%
    battery.useBattery(); // 잔량 90%
    battery.chargeBattery(); // 잔량 97%
    battery.useBattery(); // 잔량 92%

    return 0;
}
*/
#pragma endregion