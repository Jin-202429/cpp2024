#include <iostream>
using namespace std;

class Color {
private:   // 멤버 변수 
    float r, g, b;
public:    // 멤버 함수 
    Color() : r(0), g(0), b(0) {}  // 생성자 함수 -> 초기화 되는 것
    Color(float r, float g, float b) : r(r), g(g), b(b) {}  // 생성자 함수 r은 r로, g는 g로, b는 b로 초기화한다

    float GetR() { return r; }  // float 값을 리턴한다
    float GetG() { return g; }
    float GetB() { return b; }

    static Color MixColors(Color a, Color b) {  // static은 정적, 정적은 클래스에 소속된 함수다  // color를 리턴하는 Mixcolors라는 함수를 만듬
        // Mixcolors는 매계변수가 2개의 색깔(Color a, Color b)
        return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2); // 이렇게 생긴 색깔을 만들어서 리턴해줘
    }
};

int main()
{
    Color red = Color(1, 0, 0);
    Color blue = Color(0, 0, 1);
    Color puple = Color::MixColors(red, blue);   //puple = Color::은 클래스를 의미하며 클래스에 소속된 MixColors라는 함수를 불러 쓰겠다
    //puple 함수는 클래스의 멤버 함수로 들어가 있음 
    //MixColors가 어디에 있는지 알려주기 위해서는 color::(클래스)를 써줌
    //static를 적으면 red를 안써줘도 됌
    
    cout << puple.GetR() << "," << puple.GetG() << "," << puple.GetB() << endl;
}

