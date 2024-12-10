#include <iostream>
using namespace std;

class MyClass {
public:
    void PrintThis() {
        cout << "나의 주소 :" << this << endl;  // this 클래스 안에서 객체의 주소를 의미
    }
};
int main()
{
    MyClass a, b;

    cout << "a의 주소는" << &a << endl;
    cout << "b의 주소는" << &b << endl;

    a.PrintThis();
    b.PrintThis();
}

