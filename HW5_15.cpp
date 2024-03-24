#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int PIN_LENGTH = 5;             //密碼長度為5

int main() {
    srand(time(nullptr));

    int  actualPIN[PIN_LENGTH] = { 1, 2, 3, 4, 5 },     //密碼為12345
         randomNumbers[10],
         response[PIN_LENGTH];
    bool authenticated = true;

    for (int i = 0; i < 10; ++i) {
        randomNumbers[i] = rand() % 3 + 1;
    }

    cout << "PIN: ";                      //顯示PIN 0~9
    for (int i = 0; i < 10; ++i) {
        cout << i << " ";
    }
    cout << endl;

    cout << "NUM: ";                      //隨機顯示PIN碼各對應的數字
    for (int i = 0; i < 10; ++i) {
        cout << randomNumbers[i] << " ";
    }
    cout << endl;

    cout << "Enter the response(separated by spaces): ";      //提示輸入密碼
    for (int i = 0; i < PIN_LENGTH; ++i) {
        cin >> response[i];
    }

    for (int i = 0; i < PIN_LENGTH; ++i) {
        if (response[i] != randomNumbers[actualPIN[i]]) {
            authenticated = false;
            break;
        }
    }

    if (authenticated) {
        cout << "\nAuthentication successful!" << endl;     //密碼對應成功
    }
    else {
        cout << "\nAuthentication failed!" << endl;         //密碼對應失敗
    }

    return 0;
}