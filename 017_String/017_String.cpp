#include <iostream>
#include <string.h>  // C언어의 string 라이브러리:strcpy(), strlen(), strcat() ...
using namespace std;

class String {  // string이라는 클래스를 만든것
private:
    char* strData;
    int len;
public:
    String() {
        strData = NULL;
        len = 0;
    }
    String(const char* str) {
        len = strlen(str);
        // strData = str;  // 얕은 복사
        
        //깊은 복사
        strData = new char[len + 1];
        strcpy_s(strData, len + 1, str);
    }
    String(String& rhs) {  // 복사생성자를 써야지만 에러 발생 x ,  깊은 복사 사용
        // 자신의 타입의 참조형
        len = rhs.len;
        strData = new char[len + 1];
        strcpy_s(strData, len + 1, rhs.strData);  
    }
    ~String() { // 소멸자
        if (strData != NULL)
            delete[] strData;
    }
    const char* GetStrData() {  //  if (strData != NULL)랑 똑같은 말
        if (strData)
            return strData;
        return "";  // 아무것도 없는 것을 찍음
    }
    int GetLength() {
        return len;
    }
};

int main()
{
    String s1;
    String s2("Hello");

    cout << s1.GetLength() << endl;
    cout << s1.GetStrData() << endl;
    cout << s2.GetLength() << endl;
    cout << s2.GetStrData() << endl;

    String s("Hello2");  // 정적인 함수
    String t = s;   // t가 없어지면서 주소는 남아있고 s를 deleate를 할려고 했는데 이미 되어있기 때문에 에러 발생 (얕은 복사)   

    cout << t.GetLength() << endl;
    cout << t.GetStrData() << endl;  //  에러 발생
    
}

