#include <iostream>
#include <cmath>

using namespace std;

class PrimeNumber {
public:
	PrimeNumber();                      // Default constructor
	PrimeNumber(int number);            // Set to default if not prime
	
	int getPrime() const;               // Accessor function
	
	PrimeNumber operator ++();          // Prefix  increment operator
	PrimeNumber operator ++(int);       // Postfix increment operator
	PrimeNumber operator --();          // Prefix  decrement operator
	PrimeNumber operator --(int);       // Postfix decrement operator
	
private:
	int prime;
	bool isPrime(int num) const;        // Helper function to check if a number is prime
};

int main() {
	PrimeNumber p1;                                              // Default constructor, initializes to 1
	cout << "Default Prime Number: " << p1.getPrime() << endl;

	PrimeNumber p2(13);                                          // Custom constructor
	cout << "Initial Prime Number: " << p2.getPrime() << endl;
    
	++p2;                                                        // Increment
	cout << "After Increment: " << p2.getPrime() << endl;

	p2++;                                                        // Post-increment
	cout << "After Post-Increment: " << p2.getPrime() << endl;

	--p2;                                                        // Decrement
	cout << "After Decrement: " << p2.getPrime() << endl;

	p2--;                                                        // Post-decrement
	cout << "After Post-Decrement: " << p2.getPrime() << endl;
    
	system("pause");
	return 0;
}

PrimeNumber::PrimeNumber() : prime(1) {}
PrimeNumber::PrimeNumber(int number) : prime(number) {
	if (!isPrime(number)) {
		cerr << "Error: " << number << " is not a prime number." << endl;
		prime = 1;
	}
}

int PrimeNumber::getPrime() const { return prime; }

PrimeNumber PrimeNumber::operator ++() {
	do {
		++prime;
	} while (!isPrime(prime));
	return *this;
}

PrimeNumber PrimeNumber::operator ++(int) {
	PrimeNumber temp = *this;
	++(*this);
	return temp;
}

PrimeNumber PrimeNumber::operator --() {
	do {
		--prime;
	} while (prime > 1 && !isPrime(prime));
	return *this;
}

PrimeNumber PrimeNumber::operator --(int) {
	PrimeNumber temp = *this;
	--(*this);
	return temp;
}

bool PrimeNumber::isPrime(int num) const {
	if (num <= 1) return false;
	if (num == 2 || num == 3) return true;
	if (num % 2 == 0 || num % 3 == 0) return false;

	int limit = sqrt(num);
	for (int i = 5; i <= limit; i += 6) {
		if (num % i == 0 || num % (i + 2) == 0) return false;
	}

	return true;
}