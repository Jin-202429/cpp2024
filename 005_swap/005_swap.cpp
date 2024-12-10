#include <iostream>
using namespace std;

void swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void swap(int& x, int& y)  // 레퍼런스 변수사용
{
	int t = x;
	x = y;
	y = t;
}

//swap함수가 중복이 되었기 때문에 함수를 두개를 써도 오류가 나지 않는 것

void swap(double& x, double& y)  // 레퍼런스 변수사용
{
	double t = x;  // 함수 오버로딩
	x = y;
	y = t;
}

int main()
{
	int a = 4;
	int b = 5;
	double x = 1.1234;
	double y = 5.4321;

	//swap(&a, &b);  // c언어에서 이렇게 사용
	swap(a, b);
	swap(x, y);

	cout << a << ' ' << b << endl;
	cout << x << ' ' << y << endl;
}

