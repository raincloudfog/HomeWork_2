#include <iostream>



class Adventure {

public :


	//���� ���� �Լ�
	virtual void useSkill() = 0;

protected:

private:


};

//���߿� �տ� ���� ������ �Ⱦ��� �õ� �غ���
class Warror : public Adventure {

public :
	void useSkill()
	{
		std::cout << "Warror uses Slash!" << std::endl;
	}

};

// ���� ������ �Ⱦ��� �õ�
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

#pragma region ���� 4 ��ü���� ���
/*
*
* ??? vector ���� �ȹ���� �ʾҳ� �ƹ�ư ����
* #include <iostream>
#include <vector>
using namespace std;

// �⺻ Ŭ����
class Adventurer {
public:
    virtual void useSkill() = 0; // ���� ���� �Լ�
    virtual ~Adventurer() {}
};

// �Ļ� Ŭ����
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
    // ������ ���
    vector<Adventurer*> adventurers;
    adventurers.push_back(new Warrior());
    adventurers.push_back(new Mage());
    adventurers.push_back(new Archer());

    // �� ���谡�� ��ų ���
    for (size_t i = 0; i < adventurers.size(); ++i) {
        adventurers[i]->useSkill();
    }

    // �޸� ����
    for (size_t i = 0; i < adventurers.size(); ++i) {
        delete adventurers[i];
    }

    return 0;
}

*/
#pragma endregion