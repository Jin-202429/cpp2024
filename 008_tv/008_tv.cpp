#include <iostream>
using namespace std;

struct TV {   // struct를 class로 바꿔 써도 된다
private:
    bool powerOn;
    int channel;
    int volume;
public:        // 6개의 함수를 가지고 있음.
    void on() {
        powerOn = true;
    }
    void off() {
        powerOn = false;
    }
    void setChannel(int ch) {
        if (ch >= 1 && ch <= 1000)
            channel = ch;
    }
    int getChannel() {
        return channel;
    }
    void setVolume(int vol) {
        if (vol >= 1 && vol <= 100)
            volume = vol;
    }
    int getVolume() {
        return volume;
    }
};

int main()
{
    TV tv;

    tv.on();
    tv.setChannel(10);
    tv.setVolume(50);

    cout << "현재 채널은 " << tv.getChannel() << endl;
    cout << "현재 볼륨은 " << tv.getVolume() << endl;
}

