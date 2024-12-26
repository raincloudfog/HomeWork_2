#include <string>
#include < vector>
#include"iostream"
using namespace std;


//int solution(int n) {
//    int answer = 0;
//    vector<int> ls;
//
//    int num = n;
//    int d = 1;
//
//
//    while (d <= num)
//    {
//
//        if (num % d == 0)
//        {
//            
//            ls.push_back(d);
//            cout << ls.back() << endl;
//
//        }
//        d++;
//    }
//
//    for (int i : ls)
//    {
//        answer += i;
//    }
//
//
//    return answer;
//}


int solution(int n)
{
    long long answer = 0;

    long long a = sqrt(n);
    answer = ++a * a;


    return answer;
}



//int main() 
//{   
//    long long answer = 0;
//
//    long long a = sqrt(121);
//    answer = ++a * a;
//    cout << answer;
//	return 0;
//}
/*
* Â¦¼öÀÇ ÇÕ
* #include <string>
#include <vector>

using namespace std;




void b(int* ptrn, int* ptrc)
{
    
    if (*ptrn > 0)
    {
        if (*ptrn % 2 == 0) {
            *ptrc += *ptrn;            
        }
        
            --*ptrn;
        
        b(ptrn, ptrc);
    }          
     
}

int solution(int n) {
    int aa = n;
    int* bb = &aa;
    int answer = 0;
    int* cc = &answer;

    b(bb, cc);
    //int d = *bb;
    return answer;
}
*/