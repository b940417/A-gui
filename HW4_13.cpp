#include <iostream>
using namespace std;

double convertToMPH(int minutes, int seconds);                //每英里耗時轉換至mph
double convertToMPH(double kph);                              //kph轉換至mph

int main() {
	int minutes = 5;
	int seconds = 30;
	double speedInMPH = convertToMPH(minutes, seconds);
	cout << "Speed 5:30 mile in MPH(pace): " << speedInMPH << endl;     //輸出每英里耗時轉換至mph的結果

	double kph = 10.0;
	speedInMPH = convertToMPH(kph);
	cout << "Speed 10 KPH in MPH (kph): " << speedInMPH << endl;        //輸出kph轉換至mph的結果

	return 0;
}

double convertToMPH(int minutes, int seconds) {
	double totalMinutes = minutes + seconds / 60.0;           //得到總共多少分鐘
	return 60.0 / totalMinutes;
}

double convertToMPH(double kph) {
	return kph / 1.61;                                        //1英里約等於1.61公里
}