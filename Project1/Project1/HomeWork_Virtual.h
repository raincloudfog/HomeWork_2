#include <iostream>



class Adventure {

public :


	//순수 가상 함수
	virtual void useSkill() = 0;

protected:

private:


};

//나중에 앞에 접근 지정자 안쓰고 시도 해볼것
class Warror : public Adventure {

public :
	void useSkill()
	{
		std::cout << "Warror uses Slash!" << std::endl;
	}

};

// 접근 지정자 안쓰고 시도
class Mage :public  Adventure
{
public:
	void useSkill() {
		std::cout << "Mage Casts Fireball!" << std::endl;
	}
};

class Archer : public Adventure {
public : 
	void useSkill() {
		std::cout << "Archer shoots an Arrow!" << std::endl;
	}
};

#pragma region 숙제 4 객체지향 상속
/*
*
* ??? vector 아직 안배우지 않았나 아무튼 벡터
* #include <iostream>
#include <vector>
using namespace std;

// 기본 클래스
class Adventurer {
public:
    virtual void useSkill() = 0; // 순수 가상 함수
    virtual ~Adventurer() {}
};

// 파생 클래스
class Warrior : public Adventurer {
public:
    void useSkill() {
        cout << "Warrior uses Slash!" << endl;
    }
};

class Mage : public Adventurer {
public:
    void useSkill() {
        cout << "Mage casts Fireball!" << endl;
    }
};

class Archer : public Adventurer {
public:
    void useSkill() {
        cout << "Archer shoots an Arrow!" << endl;
    }
};

int main() {
    // 다형성 사용
    vector<Adventurer*> adventurers;
    adventurers.push_back(new Warrior());
    adventurers.push_back(new Mage());
    adventurers.push_back(new Archer());

    // 각 모험가의 스킬 사용
    for (size_t i = 0; i < adventurers.size(); ++i) {
        adventurers[i]->useSkill();
    }

    // 메모리 해제
    for (size_t i = 0; i < adventurers.size(); ++i) {
        delete adventurers[i];
    }

    return 0;
}

*/
#pragma endregion