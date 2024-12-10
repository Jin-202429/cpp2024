#include <iostream>
using namespace std;

class Color {
private:
    float r, g, b;
    int id; // 몇변째 색깔인지를 알게 해준다
    static int idCounter; // 멤버함수에 포함되지 않고 클래스 함수에 포함됀다
public:
    //Color() : r(0), g(0), b(0), id(idCounter++) {}
    Color() {
        r = 0;
        g = 0;
        b = 0;
        id = idCounter++;
    }
    //Color(float r, float g, float b) : r(r), g(g), b(b), id(idCounter++) {}
    Color(float r, float g, float b) {
        this->r = r;  // this를 안적어서 이름이 헷갈릴 경우 꼭 적어야함  // 초기화 시키는(float r,g,b;) r = 매개변수(Color (float r)) r
        this->g = g;
        this->b = b;
        this->id = idCounter++;
    }

    float GetR() { return r; }
    float GetG() { return g; }
    float GetB() { return b; }
    int GetId() { return id; }

    static Color MixColors(Color a, Color b) {
        return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
    }
};

int Color::idCounter = 1;

int main()
{
    Color red = Color(1, 0, 0);
    Color blue = Color(0, 0, 1);
    Color puple = Color::MixColors(red, blue);   //puple이라는 색깔은 color라는 클래스에서 래드랑 블루를 합쳐 새로운 색깔을 만드는 것?
    //MixColors가 어디에 있는지 알려주기 위해서는 color::(클래스::)를 써줌
    //static를 적으면 red를 안써줘도 됌

    cout << puple.GetR() << "," << puple.GetG() << "," << puple.GetB() << endl;
    cout << "red : id = " << red.GetId() << endl;
    cout << "blue : id = " << blue.GetId() << endl;
    cout << "puple : id = " << puple.GetId() << endl;
}

