#include <iostream>

using namespace std;

class Complex {
public:
	Complex();                                     // Default constructor
	Complex(double realPart, double imagPart);     // Constructor with two parameters
	Complex(double realPart);                      // Constructor with single parameter

	bool operator ==(const Complex& other) const;      // Overloaded operators : ==
	Complex operator +(const Complex& other) const;    // +
	Complex operator -(const Complex& other) const;    // -
	Complex operator *(const Complex& other) const;    // *

	friend istream& operator >>(istream& in, Complex& c);           // Input
	friend ostream& operator <<(ostream& out, const Complex& c);    // Output
private:
	double real;
	double imaginary;
};

int main() {                                // Test program
	Complex a(3, 4);
	Complex b(1, 2);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl << endl;

	cout << "a == b: " << (a == b) << endl;
	cout << "a + b: " << a + b << endl;
	cout << "a - b: " << a - b << endl;
	cout << "a * b: " << a * b << endl << endl;

	Complex c;
	cin >> c;
	cout << "You entered: " << c << endl;

	system("pause");
	return 0;
}
