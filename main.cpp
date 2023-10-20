#include <iostream>
#include <unistd.h>

using namespace std;

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main() {
    int h, m, s;
    int err = 0;
    int a = 0;
    while (err == 0) {
        cout << "Enter hour: " << endl;
        cin >> h;
        cout << "Enter minutes: " << endl;
        cin >> m;
        cout << "Enter hour: " << endl;
        cin >> s;
        if (h < 24 && m < 60 && s < 60)
            err++;
        else
            clearScreen();
    }
    while (a == 0) {
        clearScreen();
        cout << h << ":" << m << ":" << s << endl;
        usleep(1000000);
        s++;
        if (s > 59) {
            s = 0;
            m++;
        }
        if (m > 59) {
            m = 0;
            h++;
        }
        if (h > 23) {
            h = 0;

        }

    }
    return 0;
}