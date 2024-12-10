#include <iostream>
using namespace std;

class Vector2 {
private:
    float x, y;
public:
    Vector2() : x(0), y(0) {
        cout << this << " : Vector2()" << endl; // this는 객체의 주소를 의미함 
    }
    Vector2(float x, float y) : x(x), y(y) {
        cout << this << " : Vectore2(float, float)" << endl;
    }
    ~Vector2() {
        cout << this << " : Vector2()" << endl;
    }
    float GetX() const { return x; }  // cosnt를 쓰면 x 값을 바꾸지 않을래
    float GetY() const { return y; }
};

int main()
{
    cout << "main 시작" << endl;
    Vector2 s1;  // 소멸자 s1,s2는 동적 할당
    Vector2 s2(2, 3);

    cout << "s2 : " << s2.GetX() << "," << s2.GetY() << endl;
    //객체 동적 할당
    Vector2* d1 = new Vector2;
    Vector2* d2 = new Vector2(4, 5);  // 동적 할당된 메모리는 없어지지 않음, 할당되지 않는 것은 쓰레기(낭비가 됌.)

    cout << "d2 : " << d2->GetX() << "," << d2->GetY() << endl;
    delete d1;
    delete d2; // 동적 할당이 할당되지 않는 것을 없애기 위해서 delete를 쓴다
    
    cout << "main() 끝" << endl;
    //정적은 main함수가 다 끝난 뒤에 메모리가 없어짐
}

