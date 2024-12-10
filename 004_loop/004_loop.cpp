#include <iostream>
using namespace std;

int main()
{
    int a[] = { 1,2,3,4,5,6,7,8,9,10 };

    //범위 기반 for문  //배열안에 있는 개수를 몰라도 각각의 값을 출력해줌
    for (int i : a)
        cout << i*i << ' '; // 각각의 변수에서 i*i을 출력해줘
    cout << endl;
}

