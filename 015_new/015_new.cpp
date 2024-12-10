#include <iostream>
using namespace std;

int main()
{
	int n;
	int sum;  // 합과 가장 큰 값 출력하기
	int max;

	cout << "몇개의 데이터? : ";
	cin >> n;

	cout << "합은? : ";
	cin >> sum;

	cout << "최대값은? : ";
	cin >> max;

	int* a = new int[n];  // 필요한 만큼만 데이터를 잡아서 동적 메모리 할당
	for (int i = 0; i < n; i++)
		cin >> a[i];

	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;

	delete[] a;  // 메모리 해제(반납)   // 배열을 쓸 때는 delete[]
}