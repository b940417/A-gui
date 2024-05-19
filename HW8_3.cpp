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

Complex::Complex() : real(0), imaginary(0) {}
Complex::Complex(double realPart, double imagPart) : real(realPart), imaginary(imagPart) {}
Complex::Complex(double realPart) : real(realPart), imaginary(0) {}

bool Complex::operator ==(const Complex& other) const {
	return real == other.real && imaginary == other.imaginary;
}

Complex Complex::operator +(const Complex& other) const {
	return Complex(real + other.real, imaginary + other.imaginary);
}

Complex Complex::operator -(const Complex& other) const {
	return Complex(real - other.real, imaginary - other.imaginary);
}

Complex Complex::operator *(const Complex& other) const {
	double newReal = real * other.real - imaginary * other.imaginary;
	double newImaginary = real * other.imaginary + imaginary * other.real;
	return Complex(newReal, newImaginary);
}

istream& operator >>(istream& in, Complex& c) {
	cout << "Enter real part: ";
	in >> c.real;
	cout << "Enter imaginary part: ";
	in >> c.imaginary;
	return in;
}

ostream& operator <<(ostream& out, const Complex& c) {
	out << c.real << " + " << c.imaginary << "i";
	return out;
}