#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int num[3], rate[3], calculate[4],
        table[4][6] = {                 //宣告4位評論者對於6部電影的評分
        {3, 1, 5, 2, 1, 5},
        {4, 2, 1, 4, 2, 4},
        {3, 1, 2, 4, 4, 1},
        {5, 1, 4, 2, 4, 2}
    };

    for (int i = 0; i < 3; i++) {       //提示使用者輸入三部電影的評分
        cout << "Enter which number movie do you want to rate (100~105): ";
        cin >> num[i];
        cout << "Enter your rate from 1 to 5 (terrible to excellent): ";
        cin >> rate[i];
    }

    for (int i = 0; i < 4; i++) {       //得到與各個評論者的計算結果
        calculate[i] = sqrt(pow(rate[0] - table[i][num[0] - 100], 2) + pow(rate[1] - table[i][num[1] - 100], 2) +
            pow(rate[2] - table[i][num[2] - 100], 2));
    }

    int min = calculate[0],
        index = 0;

    for (int i = 1; i < 4; i++) {
        if (calculate[i] < min) {
            min = calculate[i];
            index = i;
        }
    }

    cout << "\nReviewer " << index << "'s ratings most closely match your ratings.\n\n";        //顯示興趣最相近的評論者

    for (int i = 100; i < 106; i++) {                                                           //顯示其他電影可能的評分
        if (num[0] != i && num[1] != i && num[2] != i)
            cout << "I guess you want to rate " << table[index][i - 100] << " for movie " << i << endl;
    }

    system("pause");
    return 0;
}