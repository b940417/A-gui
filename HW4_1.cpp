#include <iostream>
using namespace std;

void inputTime(int& hour, int& minute);                   //輸入24小時制
void convertTime(int& hour, char& period);                //轉換小時制的函式
void outputTime(int& hour, int& minute, char& period);    //輸出12小時制的結果

int main() {
	char choice;
	do {
		int hour, minute;
		char period;

		inputTime(hour, minute);
		convertTime(hour, period);
		outputTime(hour, minute, period);

		cout << "\Do you want to convert another time? (y/n): ";     //顯示是否還要轉換
		cin >> choice;
		cout << endl;
	} while (choice == 'y' || choice == 'Y');                        //輸入y or Y則繼續

	return 0;
}

void inputTime(int& hour, int& minute) {
	cout << "Enter the time in 24-hour notation (HH MM): ";          //提示使用者輸入24小時制時間
	cin >> hour >> minute;
}

void convertTime(int& hour, char& period) {
	if (hour >= 12) {           // >=12小時為P.M.
		period = 'P';
		if (hour > 12)          // >12小時數-12
			hour -= 12;
	}
	else {
		period = 'A';           // <12小時為A.M.
		if (hour == 0)          // 小時數為0則轉換為12
			hour = 12;
	}
}

void outputTime(int& hour, int& minute, char& period) {     //輸出轉換結果
	cout << "The time in 12-hour notation is: " << hour << ":" << minute << " " << period << ".M." << endl;
}