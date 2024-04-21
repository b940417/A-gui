#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class BoxOfProduce {
public:
    void setProduce(const string& item, int index);
    string getProduce(int index) const;
    
    void output() const;
private:
    string produce[3];
};

int main() {
    BoxOfProduce box;
    ifstream infile("produce_list.txt");                //Read produce items from a file

    if (!infile) {
        cout << "Error opening file." << endl;
        return 1;
    }

    string produceList[5];                              //5 types of produce
    int count = 0;

    while (count < 5 && getline(infile, produceList[count])) {
        count++;
    }
    infile.close();

    srand(time(nullptr));                               //Initialize random seed

    for (int i = 0; i < 3; i++) {                       //Randomly select three produce items
        int randIndex = rand() % 5;
        box.setProduce(produceList[randIndex], i);
    }

    box.output();                                       //Display initial contents of the box

    int index;
    string newItem;

    cout << "Enter the index of the item you want to substitute (1-3): ";          //Allow user to make substitutions
    cin >> index;
    cin.ignore();                                       //clean buffer
    cout << "Enter the new item: ";
    getline(cin, newItem);

    box.setProduce(newItem, index - 1);

    cout << "\nFinal Contents of the Box:" << endl;     //Display final contents of the box
    box.output();

    system("pause");
    return 0;
}

void BoxOfProduce::setProduce(const string& item, int index) {       //Mutator function to set an item
    produce[index] = item;
}

string BoxOfProduce::getProduce(int index) const {                   //Accessor function to get the items
    return produce[index];
}

void BoxOfProduce::output() const {                                  //Output function to display the contents of the box
    cout << "Box Contents:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << (i + 1) << ". " << produce[i] << endl;
    }
}