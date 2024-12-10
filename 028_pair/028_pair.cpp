#include <iostream>
#include <map>
using namespace std;

int main()
{
    pair<int, string> a = { 123, "abc" };

    cout << a.first << ", " << a.second << endl;
    a.second = "asdlkfalk";
    cout << a.first << ", " << a.second << endl;

    pair<string, string> dict = { "Hello", "안녕하세요" };
    cout << dict.first << ", " << dict.second << endl;

    //dictionary
    map<string, int> fruit;
    fruit["apple"] = 7;  // 사과는 7개가 있음
    fruit["banana"] = 5;
    fruit["orange"] = 10;

    cout << "banana : " << fruit["banana"] << endl;  // 각각의 요소는 pair
    cout << "apple : " << fruit["apple"] << endl;
    cout << "orange : " << fruit["orange"] << endl;

    for (pair<string, int> f : fruit)  //pair<string, int> 대신에 auto 사용가능
        cout << f.first << " : " << f.second << endl;
    cout << endl;
}

