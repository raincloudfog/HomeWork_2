#pragma once
#include <iostream>


using namespace std;

class Observer {


public :

	//��ȭ�� //���߿� �𸮾󿡼��� ui�� ���� �غ���
	void update(string& message ) {
		cout << message << endl;
	}
};



class Subject {
public:

	virtual void attach(Observer* observer) = 0;// �߰�
	virtual void detach(Observer* observer) = 0; // ����
	virtual void notify(Observer* observer) = 0;
	virtual  ~Subject() = default;

};