#include <string>
#include < vector>
#include <iostream>

using namespace std;

//�⺻Ŭ����
class vehicle {

	//���������� protected ��ӵ� �ڽ� Ŭ������ ��밡��

protected:
    string color;
    int speed;

    //���������Լ��� ������ Ŭ������ �� ��ü�� ������ �ɼ� �����ϴ�.(�ν��Ͻ�ȭ �Ѵ� ��� �մϴ�.)
        //���� ������ ����� ������ �߻� �մϴ�.
    //virtual void test1() = 0;


public :
    //�����Ǿ�����  color���� �Ű����� c�� speed���� s������
    vehicle(string c, int s) : color(c), speed(s) {}
    virtual void makeSound() {
        cout << "��" << endl;
    }
};



//�Ļ� Ŭ����
class Bicycle : public vehicle
{
    //vehicle�� ��� �ۺ��� �������

private :
    bool hasBasket;

public :
    __override void makeSound() {

    }
    //�Ȱ��� color�� speed���� ���� �ű⿡�ٰ� basket���� �߰��ε�
    Bicycle(string c, int s, bool basket) : vehicle(c, s), hasBasket(basket) {}
};

namespace over
{
    //�����ε�
    //�Ű������� �ٸ��� �ؼ� �ٸ��� ����� �� �ִ�.



    //int Ÿ��
    void test(int a)
    {
        cout << a << endl;
    }

    //float Ÿ��
    void test(float a)
    {
        cout << a << endl;
    }

    //string Ÿ��
    void test(string a)
    {
        cout << a << endl;
    }

    //2�� ���ϱ�
    void test(int a, int b)
    {
        cout << a +b<< endl;
    }
    //3�� ���ϱ�
    void test(int a, int b,int c)
    {
        cout << a + b  + c<< endl;
    }


}