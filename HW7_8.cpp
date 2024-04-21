#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> grades;
    int grade,
        maxGrade = -1;

    cout << "Enter grades (enter -1 to finish):\n";    //Input grades until the user enters -1
    do {
        cin >> grade;
        if (grade != -1) {
            grades.push_back(grade);
            maxGrade = max(maxGrade, grade);
        }
    } while (grade != -1);

    vector<int> histogram(maxGrade + 1);               //Compute the histogram
    for (int grade : grades) {
        histogram[grade]++;
    }

    cout << "\nHistogram of Grades:\n";                //Output the histogram
    for (int i = 0; i <= maxGrade; i++) {
        cout << i << ": ";
        if (i < 10) {
            cout << " ";
        }
        for (int j = 0; j < histogram[i]; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    system("pause");
    return 0;
}