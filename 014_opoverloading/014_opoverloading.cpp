#include <iostream>
using namespace std;

class Vector2 {
private:
    float x, y;
public:
    Vector2();
    Vector2(float x, float y);
    float GetX() const; // const는 안써도 되지만 써주는 것이 안전하다
    float GetY() const;
    Vector2 operator+(const Vector2 other) const;
    Vector2 operator-(const Vector2 other) const;
    Vector2 Add(const Vector2 other) const;
    Vector2 operator*(float k);
    float operator*(Vector2 other);
};

Vector2 Vector2::operator*(float k) {
    return Vector2(k * x, k * y);
}

float Vector2::operator*(Vector2 other) {
    return x * other.x + y * other.y;  // 백터를 return하는게 아니라 값을 return함
}

Vector2::Vector2() : x(0), y(0) {}
Vector2::Vector2(float x, float y) : x(x), y(y) {}
float Vector2::GetX() const { return x; }  // return 값이 Vector2를 의미함
float Vector2::GetY() const { return y; }
Vector2 Vector2::operator+(const Vector2 other) const {
    return Vector2(this->x + other.x, this->y + other.y);  // this->x, this-> y는 float x,y;를 의미함
}
Vector2 Vector2::operator-(const Vector2 other) const {
    return Vector2(this->x - other.x, this->y - other.y);
}
Vector2 Vector2::Add(const Vector2 other) const {  // 매계변수가 바꿔지지 않으면 const 사용?
    return Vector2(x + other.x, y + other.y);
}

Vector2 operator*(float k, Vector2 v) {
    return Vector2(k * v.GetX(), k * v.GetY());  // v.GetX()라는 값에 k를 곱한 것
}
// 클래스 밖에서 만든 연산자 오버로딩
// 클래스의 멤버 함수가 아니다

int main()
{
    Vector2 a(3, 4);
    Vector2 b(5, 6);

    Vector2 c = a + b;
    Vector2 d = a - b;

    Vector2 e = a.Add(b);

    cout << "c = (" << c.GetX() << "," << c.GetY() << ")" << endl;
    cout << "d = (" << d.GetX() << "," << d.GetY() << ")" << endl;
    cout << "e = (" << e.GetX() << "," << e.GetY() << ")" << endl;

    Vector2 f = a * 3.1;
    Vector2 g = 3.1 * a;  // return Vector2(k * v.GetX(), k * v.GetY());을 써줘야지만 실수*백터를 할 수 있다
    float x = a * b;

    cout << "f = (" << f.GetX() << "," << f.GetY() << ")" << endl;
    cout << "g = (" << g.GetX() << "," << g.GetY() << ")" << endl;
    cout << "x = (" << x << ")" << endl;

}

