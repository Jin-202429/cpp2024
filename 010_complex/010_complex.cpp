#include <iostream>
using namespace std;

class Complex {
private:
    double real;  // 실수
    double imag;  // 허수
public:
    Complex() {  // 매개변수가 없는 초기화 생성자
        real = 0;
        imag = 0;
    }
    Complex(double real, double imag) {  // 매개변수 2개 있는 초기화 생성자
        this->real = real;  // 맴버함수에 있는 real를 알려주기 위해서 this->real이라고 쓰는 것임.
        this->imag = imag;  
    }
    void SetReal(double real) {
        this->real = real;   // this-> real은 double real을 의미함
    }
    double GetReal() {
        return this->real;  // this가 없어도 됌.
    }
    void SetImag(double imag) {
        this->imag = imag;
    }
    double GetImag() {
        return imag;    // this 써도 되고 안써도 됌
    }
};
int main()
{
    Complex c1;
    Complex c2 = Complex(2, 3);
    Complex c3(2, 4);

    cout << "c1 = " << c1.GetReal() << "," << c1.GetImag() << endl;
    cout << "c2 = " << c2.GetReal() << "," << c2.GetImag() << endl;
}

