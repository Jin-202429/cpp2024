#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int a[7] = { 2,4,3,1,7,5,23 };

    sort(a, a + 7);

    for (int i : a)  
        cout << i << " ";  // a 배열의 i
    cout << endl;

    vector<int> v = { 12,543,67,34,2565,7,6 };
    sort(v.begin(), v.end());

    for (int i : v)
        cout << i << " ";  // v 배열의 i
    cout << endl;
}

