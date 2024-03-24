#include <iostream>

using namespace std;

const int NUM_GRADES = 6;                //考試成績為0~5

void inputGrades(int grades[], int& numStudents);               //輸入各個學生的成績
void generateHistogram(const int grades[], int numStudents);    //產生各成績的計數結果

int main() {
    int grades[100];
    int numStudents;

    inputGrades(grades, numStudents);
    generateHistogram(grades, numStudents);

    return 0;
}

void inputGrades(int grades[], int& numStudents) {
    cout << "Enter the number of students: ";           //輸入學生人數
    cin >> numStudents;

    cout << "Enter grades (separated by spaces): ";     //輸入個別成績
    for (int i = 0; i < numStudents; ++i) {
        cin >> grades[i];
    }
}

void generateHistogram(const int grades[], int numStudents) {
    int histogram[NUM_GRADES] = { 0 };

    for (int i = 0; i < numStudents; ++i) {             //計算各成績人次
        histogram[grades[i]]++;
    }

    for (int i = 0; i < NUM_GRADES; ++i) {              //顯示結果
        cout << histogram[i] << " grade(s) of " << i << endl;
    }
}