#include <iostream>
#include <vector>

using namespace std;
class Myinteger {
public:
	Myinteger(int val);                  // Constructor

	int getValue() const;                // Accessor function
	void setValue(int val);              // Mutator function

	int operator [](int index) const;    // Operator funvtion
private:
	int value;
};

int main() {                             // Test function
	Myinteger x(418);

	cout << "x[0] = " << x[0] << endl;
	cout << "x[1] = " << x[1] << endl;
	cout << "x[2] = " << x[2] << endl;
	cout << "x[3] = " << x[3] << endl;

	system("pause");
	return 0;
}

Myinteger::Myinteger(int val) : value(val) {}

int Myinteger::getValue() const { return value; }

void Myinteger::setValue(int val) { value = val; }

int Myinteger::operator [](int index) const {
	if (index < 0)
		return -1;

	vector<int> digits;                    // Convert integer to a vector of digits
	int temp = value;
	while (temp > 0) {
		digits.push_back(temp % 10);
		temp /= 10;
	}

	if (index < digits.size())             // If index is within range, return the digit
		return digits[index];
	else                                   // Otherwise, return -1
		return -1;
}