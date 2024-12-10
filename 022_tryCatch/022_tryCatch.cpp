#include <iostream>
using namespace std;

int fact(int n) {
	if (n == 1)
		return 1;
	return n * fact(n - 1);  // else가 있으나 없으나 똑같음
}

int main() 
{
	int n;

	try {
		cout << "자연수 입력 : ";
		cin >> n;

		if (n <= 0)
			// cout << n << "은 자연수가 아닙니다." << endl;
			throw(n);
		else
			cout << n << "!= " << fact(n) << endl;  // try - cath를 쓰지 않았을 때의 방법
	}
	catch (int e) {
		cout << n << "은 자연수가 아닙니다." << endl;
	}
}