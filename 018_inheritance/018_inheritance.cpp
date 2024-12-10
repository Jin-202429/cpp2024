#include <iostream>
using namespace std;

class Base {
public:  
    int bNum;
    void bFunc() {
        cout << "Hello from Base!" << endl;
    }
};

class Derived : public Base {  // Base 클래스가 있는 난 class Derived 이므로 Base 클래스를 상속 받은 것
public:
    int dNum;
    void dFunc() {
        cout << "Hello from Base!" << endl;
    }
};

int main()
{
    /*Base bbb;

    bbb.bNUm = 10; // public을 썼기 때문에 이렇게 쓸 수 있음*/
    Base b;
    Derived d;

    b.bFunc();
    b.bNum = 1;
    cout << "b.bNum = " << b.bNum << endl;

    d.dFunc();
    d.dNum = 2;
    cout << "d.dNum = " << d.dNum << endl;

    d.dFunc();
    d.dNum = 1;
    cout << "d.dNum = " << d.dNum << endl;
}

