#pragma once
#include <iostream>

using namespace std;

/*
* - ���
- ���͸� �ܷ�(0~100)�� ���� �մϴ�.
- ���͸� ��� �� ������ �� �� �־�� �ϴϴ�.
- �ʱ� ���͸��� 0 �Դϴ�.
- ������ �޼���
    - ���͸� �ܷ��� ��ȯ�ϴ� �޼���
    - ���͸��� ����ϴ� �޼���(�ѹ� ȣ��ɶ����� ���͸� �ܷ��� 5�� ����)
    - ���͸��� �����ϴ� �޼���(�ѹ� ȣ��ɋ����� ���͸� �ܷ��� 7�� ����)
- �ʱ� ����
    - ���͸� �ܷ��� �⺻���� 100 �Դϴ�. �ش� ���� �����ڿ��� ������ �� �־�� �մϴ�.

    [���͸� ���� Ŭ���� �ó�����]
1. ���α׷� ���� ��, �ʱ� ���͸� �ܷ��� 100%�� �����˴ϴ�.
2. ���͸��� �� �� ����Ͽ� �� ��� �� 5%�� �ܷ��� �����մϴ�.
   - ù ��° ��� �� �ܷ�: 95%
   - �� ��° ��� �� �ܷ�: 90%
3. ���͸��� �� �� �����Ͽ� 7% �ܷ��� �����մϴ�.
   - ���� �� �ܷ�: 97%
4. �ٽ� ���͸��� �� �� ����Ͽ� �ܷ��� 5% �����մϴ�.
   - ��� �� �ܷ�: 92%
5. �� �ܰ迡�� ���͸� �ܷ��� ��ȭ�� ��µ˴ϴ�.

�� �ó�������� �������� �� ��� ���� �Ʒ��� �����ϴ�.

Initial charge: 100%
Battery used. Current charge: 95%
Battery used. Current charge: 90%
Battery charged. Current charge: 97%
Battery used. Current charge: 92%


    */


class Bettery {




public :

    //�ʱ� 0
    int Bettery_life = 0;

    Bettery() {
        Bettery_life = 100;
        std::cout << "Initial charge: " << Bettery_life << endl;

        

    }

    //��� �Լ� ���� ����
    void Bettery_Charge() {
        
        //���͸� ����
        Bettery_life = Bettery_life + 7 >= 100 ?
            100 : Bettery_life + 7;
        cout << "Battery charged. Current charge: " << Bettery_life << endl;

    }

    void Bettery_Use() {

        //���͸� �Ҹ�
        Bettery_life = Bettery_life - 5 <= 0 ?
            0 : Bettery_life - 5;
        cout << "Battery used. Current charge : " << Bettery_life << endl;

    }
    


};

#pragma region ����2 ���͸� �ؼ� 
/*#include <iostream>

class Battery {
private:
    int charge; // ���͸� �ܷ�

public:
    // ������: �⺻���� 100���� ����
    Battery(int initialCharge = 100) : charge(initialCharge) {
        if (charge < 0) {
            charge = 0;
        } else if (charge > 100) {
            charge = 100;
        }
    }

    // ���͸� �ܷ� ��ȯ
    int getCharge() const {
        return charge;
    }

    // ���͸��� ����Ͽ� �ܷ� ����
    void useBattery() {
        if (charge >= 5) {
            charge -= 5;
        } else {
            charge = 0;
        }
        std::cout << "Battery used. Current charge: " << charge << "%\n";
    }

    // ���͸��� �����Ͽ� �ܷ� ����
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
    // ���͸� ��ü ���� (�ʱ� �ܷ� 100)
    Battery battery;

    std::cout << "Initial charge: " << battery.getCharge() << "%\n";

    // ���͸� ��� �� ���� �׽�Ʈ
    battery.useBattery(); // �ܷ� 95%
    battery.useBattery(); // �ܷ� 90%
    battery.chargeBattery(); // �ܷ� 97%
    battery.useBattery(); // �ܷ� 92%

    return 0;
}
*/
#pragma endregion