#pragma once
#include <iostream>


//Ŭ���� ����
class diamond
{

	//���������� public �ٸ������� ������ ���� 
public:
	//������
	diamond(int num) {
		
		if (num <= 0)
		{
			std::cout << "0���������� 1�� �ٲٰڴ�" << std::endl;
			
		}
		//���׿�����? ���
		floor = num <= 0 ? 1 : num;
	}

	//����¥���� ���������.
	//���ϴ� ����
	int floor = 0;

	void TextDiamond();
	


};


#pragma region ���̾Ƹ�� ���� �ؼ�
/*
* #include <iostream>
using namespace std;

int main() {
    int n;

    // ����ڷκ��� �Է� �ޱ�
    //������� Ȯ���ϴ� ��
    cout << "���̾Ƹ���� ũ�⸦ �Է��ϼ��� (���� ����): ";
    cin >> n;

    // �Է°� ����
    if (n <= 0) {
        cout << "�߸��� �Է��Դϴ�. ���� ������ �Է��ϼ���." << endl;
        return 1;
    }

    // ���̾Ƹ�� ��� ���
    for (int i = 1; i <= n; ++i) {
        // ���� ���
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        // �� ���
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }
        cout << endl; // �� �ٲ�
    }

    // ���̾Ƹ�� �ϴ� ���
    for (int i = n - 1; i >= 1; --i) {
        // ���� ���
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        // �� ���
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }
        cout << endl; // �� �ٲ�
    }

    return 0;
}

//��� �ϴ� ���� ��� ��. �����ΰ�� �����ιٲ����

*/
#pragma endregion