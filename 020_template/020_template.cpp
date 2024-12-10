#include <iostream>
using namespace std;

class Vector2 {
private:
	float x, y;
public:
	Vector2() : x(0), y(0) {}
	Vector2(float x, float y) : x(x), y(y) {}  // x는 x를 나타내고 x(x)처럼 괄호안에 있는 x는 float x를 나타냄
	/*
	Vector2(float x, float y) {
	   this -> x = x;
	   this -> y = y;
	}
	*/
	float GetX() const { return x; }  // 안전하기 위해서 const를 꼭 쓴다
	float GetY() const { return y; }
	Vector2 operator+(const Vector2 other) const {
		return Vector2(x + other.x, y + other.y);
	}
	Vector2 operator-(const Vector2 other) const {
		return Vector2(x - other.x, y - other.y);
	}
	Vector2& operator+=(const Vector2 other) {
		x += other.x;
		y += other.y;
		return *this;
	}
	Vector2& operator-=(const Vector2 other) {
		x -= other.x;
		y -= other.y;
		return *this;
	}
};

template <typename T>  // 타입을 대신해서 template를 쓸 수 있다
T getArraySum(T arr[], int n) {
	T sum = arr[0];
	for (int i = 1; i < n; i++)
		sum += arr[i];   // sum = sum + arr[i];    // 연산자 operator를 정의 했기 때문에 sum += arr[i]라 쓸 수 있음
	// Vector2 클래스는 아직 += 연산이 불가능하기 떄문에 +=라고 쓰지 못함.  
	return sum;
}

template < >
string getArraySum(string arr[], int n) {
	string sum = arr[0];
	for (int i = 1; i < n; i++)
		sum += " " + arr[i];
	return sum;
}

int main()
{
	int iarr[5] = { 3,5,6,2,4 };
	double darr[5] = { 1.3, 54.3, 4.6, 8.7, 4.5 };
	string sarr[3] = { "afijlk", "sadlfijsl", "pajfdg" };
	Vector2 varr[3] = { Vector2(1,2), Vector2(3,5), Vector2(7,8) };

	int isum = getArraySum<int>(iarr, 5);
	double dsum = getArraySum<double>(darr, 5);
	string ssum = getArraySum<string>(sarr, 3);
	Vector2 vsum = getArraySum<Vector2>(varr, 3);

	cout << isum << endl;
	cout << dsum << endl;
	cout << ssum << endl;
	cout << "(" << vsum.GetX() << "," << vsum.GetY() << ")" << endl;
}

