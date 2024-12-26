#pragma once
#include <cmath>
#include <iostream>

/*C++�� �����ϰ� �� �м��� ������ �ϴ� Ŭ������ ����� ���ô�.

- Fraction Ŭ������ ����� �м��� ǥ�� �ϼ���
    - ���ڴ� numerator, �и�� denominator�� ���� �մϴ�.
    - �� �м��� ���� ����� ���м��� ��� �մϴ�.
- ������ �޼���
    - �⺻ �����ڸ� ���弼��(numerator = 0 / denominator = 1 )
    - ������ �и��� ���� �Է¹޴� �����ڸ� �����ϼ���
    - ���͸� �ܷ��� ��ȯ�ϴ� �޼���
    - ���� �м��� ����ϴ� �Լ� display�� �� �����ϼ���
    - ���м� ���·� ����� �Լ� simplify�� �����ϼ��� 
    �� �� �ִ������� ���ϴ� �Լ��� �ʿ��� �� �ִµ� �Ʒ��� �����ϼ���*/

/*// gcd �Լ� ���� (��Ŭ���� ȣ����)
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
    //���� �и�
    HomeWork_Fraction(int num1, int num2) {
        numerator = num1;
        denominator = num2;
        multi = (double)num1 / num2;
        std::cout << multi << std::endl;
        //simplify();
    }

    int gcd(int a, int b) {

        //b�� 0�̾ƴҶ����� �ݺ�



        while (b != 0) {
            //b�� a�� b�� ���� ������������ �ٲ�
            //a�� b�� ������ �ٲ�
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

        //�� �ƴ� �Ҽ��� �м��� �ٲ۴� ���ΰ̴ϴ�.
        //���� �峪�������� ������ ��ƴ�����

        // <cmath> �Լ��� ����ϱ� ����
        //�Ҽ��� ���ڷ� ������
        double temp = multi;

        //10�� �����༭ �и�ͺ��ڷ� ������ش�.
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

        //�ּҰ���� ����
        
        //std::cout << gcd(temp, d) << std::endl;
        int fa = (int)temp / gcd(temp, d);
        int fb = (int)d / gcd(temp, d);
        std::cout << fa << " / " << fb << std::endl;


    }

    //���� ������ private �ٸ� Ŭ�������� ���� �Ұ�!
private:
    
    int numerator = 0;
    int denominator = 0;
    double multi = 0;

};


#pragma region ���� ���� 
/*#include <iostream>
using namespace std;

// Fraction Ŭ���� ����
// �м��� ǥ���ϰ� ���� �� �ܼ�ȭ ����� �����մϴ�.
class Fraction {
private:
    int numerator;   // ����
    int denominator; // �и�

    // �ִ������� ����ϴ� ��Ŭ���� ȣ���� ����
    // gcd �Լ��� Fraction Ŭ���� ���ο����� ���ǹǷ� private���� ����
    int gcd(int a, int b) const {
        while (b != 0) {
            int temp = b; // ���� b ���� ����
            b = a % b;    // a�� b�� ���� �������� ���ο� b�� ����
            a = temp;     // ���� b ���� ���ο� a�� ����
        }
        return a; // b�� 0�� �Ǿ��� �� a�� �ִ�����
    }

public:
    // �⺻ ������
    // ���ڸ� 0, �и� 1�� �ʱ�ȭ�մϴ�. (0/1�� 0�� ��Ÿ��)
    Fraction() : numerator(0), denominator(1) {}

    // �Ű������� �ִ� ������
    // ����ڷκ��� ���ڿ� �и� �Է¹޾� �ʱ�ȭ�մϴ�.
    // �и� 0�� ��� �ڵ����� 1�� �����մϴ�. (�и� 0�̸� ���ǵ��� ����)
    Fraction(int num, int denom) {
        numerator = num;
        denominator = (denom != 0) ? denom : 1; // �и� 0�̸� 1�� ����
    }

    // �м��� ������ ���·� ��ȯ�ϴ� �Լ�
    // �ִ�����(gcd)�� �̿��� ���ڿ� �и� �����ϴ�.
    void simplify() {
        int gcdValue = gcd(numerator, denominator); // ���ڿ� �и��� �ִ����� ���
        numerator /= gcdValue;   // ���ڸ� �ִ������� ������
        denominator /= gcdValue; // �и� �ִ������� ������
    }

    // �� �м��� ���ϴ� �Լ�
    // �� �м��� ���� ���ο� �м��� ��ȯ�մϴ�.
    Fraction multiply(const Fraction& other) const {
        // ���ο� ���� = ���� �м��� ���� * �ٸ� �м��� ����
        int newNumerator = numerator * other.numerator;

        // ���ο� �и� = ���� �м��� �и� * �ٸ� �м��� �и�
        int newDenominator = denominator * other.denominator;

        // ���ο� Fraction ��ü ����
        Fraction result(newNumerator, newDenominator);

        // ����� ������ �����
        result.simplify();

        return result;
    }

    // �м��� ����ϴ� �Լ�
    // ���ڸ� '/' ��ȣ�� �Բ� ����մϴ�.
    void display() const {
        cout << numerator << "/" << denominator;
    }
};

int main() {
    // �� �м� ����
    Fraction f1(1, 2); // ù ��° �м�: 1/2
    Fraction f2(3, 4); // �� ��° �м�: 3/4

    // �� �м��� ���ϱ�
    Fraction product = f1.multiply(f2); // f1 * f2

    // ��� ���
    cout << "���� ���: ";
    product.display(); // ��� �м� ���
    cout << endl;

    return 0;
}
*/
#pragma endregion


