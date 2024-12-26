#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;


class stlstl {

public :

    // ���Ϳ� �� ������ ����
    vector<int> vec = { 10, 20, 30, 40, 50 };
    map<string, int> mp = {
        {"Alice", 90},
        {"Bob", 85},
        {"Charlie", 95}
    };

    // ����: �Ʒ� �κ��� �ϼ��ϼ���

    stlstl() {


        sun(vec);
        sun(mp);

        sun(vec,false);
        sun(mp,false);

    }

    
    void sun(vector<int> stl,bool b = true) {

       
        if (b == true)
        {
            for (auto a = stl.begin(); a != stl.end(); ++a)
            {
                std::cout << *a << endl;
            }
        }
        else {
            for (auto a = stl.rbegin(); a != stl.rend(); ++a)
            {
                std::cout << *a << endl;
            }
        }
        
    }

    void sun(map<string, int> stl, bool b = true) {

        //std::cout << " : " << endl;
        if (b== true)
        {
            for (auto a = stl.begin(); a != stl.end(); ++a)
            {
                std::cout << a->first << " : " << a->second << endl;
            }
        }
        else {
            //std::cout << " : " << endl;
            for (auto a = stl.rbegin(); a != stl.rend(); ++a)
            {
                std::cout << a->first << " : " << a->second << endl;
            }
        }
        
    }

    
};