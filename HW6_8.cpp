#include <iostream>

using namespace std;

class Money {
public:
    Money(int initialDollars, int initialCents) : dollars(initialDollars), cents(initialCents) {}

    int getDollars() const,
        getCents() const;

    void setDollars(int newDollars),
         setCents(int newCents);

    double getAmount() const;

private:
    int dollars, cents;
};

int main() {
    Money money1(10, 50);         // Create two Money objects
    Money money2(5, 75);

    cout << "Money 1: $" << money1.getDollars() << "." << money1.getCents() << endl;     // Test accessor functions
    cout << "Money 2: $" << money2.getDollars() << "." << money2.getCents() << endl;

    money1.setDollars(15);        // Test accessor functions
    money2.setCents(99);

    cout << "Updated Money 1: $" << money1.getDollars() << "." << money1.getCents() << endl;
    cout << "Updated Money 2: $" << money2.getDollars() << "." << money2.getCents() << endl;

    cout << "Amount of Money 1: $" << money1.getAmount() << endl;      // Test getAmount function
    cout << "Amount of Money 2: $" << money2.getAmount() << endl;

    system("pause");
    return 0;
}

int Money::getDollars() const { return dollars; }                     // Accessor functions
int Money::getCents() const { return cents; }

void Money::setDollars(int newDollars) { dollars = newDollars; }      // Mutator functions
void Money::setCents(int newCents) { cents = newCents; }

double Money::getAmount() const {                                     // Function to return monetary amount as double
    return dollars + (cents / 100.0);
}