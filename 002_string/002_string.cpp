#include <iostream>
using namespace std;

int main()
{
    string name;
    string greeting;

    cout << "이름 : ";
    cin >> name;

    greeting = "안녕하세요, " + name + "님";  // +만 하면 글자가 합쳐진다

    cout << greeting << endl;
    cout << name << "은 총" << name.length() << "글자입니다.\n";  //c++에서는 endl;을 써주는 것이 일반적임  //name.을 쓰면 쓸 수 있는 함수가 나옴
    cout << name << "의 첫 글자는 " << name[0] << "입니다" << endl;
}


