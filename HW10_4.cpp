#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    Student(string studentName = "", int classes = 0) : name(studentName), numClasses(classes) {
        classList = new string[numClasses];
    }
    ~Student() { delete[] classList; }
    
    void setName(string studentName) { name = studentName; }  // Mutator functions
    void setNumClasses(int classes);
    void setClassList(int index, string className);

    string getName() const { return name; }    // Accessor functions
    int getNumClasses() const { return numClasses; }
    string* getClassList() const { return classList; }
    
    void inputStudentInfo();                   // Input  function
    void outputStudentInfo() const;            // Output function
    void resetStudentInfo();                   // Reset  function

    Student& operator=(const Student& other);  // Overloaded assignment operator
private:
    string name;
    int numClasses;
    string* classList;                         // Dynamic array of strings
};

int main() {
    Student student1;                          // Test the Student class
    student1.inputStudentInfo();
    student1.outputStudentInfo();

    Student student2("Alice", 3);
    student2.setClassList(0, "Math");
    student2.setClassList(1, "English");
    student2.setClassList(2, "History");
    student2.outputStudentInfo();

    student2.resetStudentInfo();
    student2.outputStudentInfo();             // Should show empty info after reset

    Student student3;
    student3 = student1;                      // Test assignment operator
    student3.outputStudentInfo();

    system("pause");
    return 0;
}

void Student::setNumClasses(int classes) {
    numClasses = classes;
    delete[] classList;         // Clear previous classList
    classList = new string[numClasses];
}

void Student::setClassList(int index, string className) {
    if (index >= 0 && index < numClasses) {
        classList[index] = className;
    }
    else {
        cout << "Invalid index for class list." << endl;
    }
}

void Student::inputStudentInfo() {
    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter number of classes: ";
    cin >> numClasses;
    cin.ignore();             // Clear input buffer

    delete[] classList;       // Clear previous classList
    classList = new string[numClasses];

    for (int i = 0; i < numClasses; ++i) {
        cout << "Enter class name " << i + 1 << ": ";
        getline(cin, classList[i]);
    }
}

void Student::outputStudentInfo() const {
    cout << "Student Name: " << name << endl;
    cout << "Number of Classes: " << numClasses << endl;
    cout << "Class List:" << endl;
    for (int i = 0; i < numClasses; ++i) {
        cout << " - " << classList[i] << endl;
    }
}

void Student::resetStudentInfo() {
    numClasses = 0;
    delete[] classList;
    classList = nullptr;
}

Student& Student::operator=(const Student& other) {
    if (this != &other) {
        delete[] classList;  // Clear previous classList
        name = other.name;
        numClasses = other.numClasses;
        classList = new string[numClasses];
        for (int i = 0; i < numClasses; ++i) {
            classList[i] = other.classList[i];
        }
    }
    return *this;
}