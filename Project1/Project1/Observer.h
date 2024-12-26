#pragma once
#include <iostream>


using namespace std;

class Observer {


public :

	//대화용 //나중에 언리얼에서는 ui에 적용 해볼것
	void update(string& message ) {
		cout << message << endl;
	}
};



class Subject {
public:

	virtual void attach(Observer* observer) = 0;// 추가
	virtual void detach(Observer* observer) = 0; // 해제
	virtual void notify(Observer* observer) = 0;
	virtual  ~Subject() = default;

};