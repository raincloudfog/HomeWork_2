#include <iostream>

using namespace std;



//�Ʒ� 3���� �Լ��� �ϳ��� ���ø� �Լ��� �����ϼ���
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

//�Ʒ� �׽�Ʈ �ڵ�� �������� ������
int main() {
    // ���� ���ϱ�
    cout << "3 + 5 = " << add(3, 5) << endl;

    // �Ǽ� ���ϱ�
    cout << "2.5 + 4.3 = " << add(2.5, 4.3) << endl;

    // ���ڿ� ��ġ��
    cout << "\"Hello, \" + \"World!\" = " << add(string("Hello, "), string("World!")) << endl;

    // �Ʒ� �ڵ�� ������ ������ �߻��ؾ� ��
    // cout << add(true, false) << endl;

    return 0;
}