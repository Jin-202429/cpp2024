#include <iostream>
using namespace std;

int inventory[8] = { 0 };  // inventory는 재고, 목록이라는 뜻
int score = 0;

void getItem(int itemId, int cnt = 1, int sc = 0)  // 뒤에 2개는 디폴트 매개변수 사용
{
    inventory[itemId] += cnt;
    score += sc;
}

int main()
{
    getItem(6, 5); // 6번 item을 5개 가져옴
    getItem(3);    // 3번 item을 1개 가져옴
    getItem(5, 4, 7000);  // 5번 item을 4개 가져옴, 7000점 획득

    for (int i : inventory)
        cout << i << " ";
    cout << endl;

    cout << "점수 : " << score << endl;
}

