#include <iostream>

using namespace std;

const int DEEP_DISH = 1,                // Constants for pizza types and sizes
          HAND_TOSSED = 2,
          PAN = 3,
          SMALL = 1,
          MEDIUM = 2,
          LARGE = 3;

class Pizza {
public:
    Pizza(int t, int s, int numToppings) : type(t), size(s), toppings(numToppings) {}

    int getType() const,
        getSize() const,
        getToppings() const;

    void setType(int t),
         setSize(int s),
         setToppings(int numToppings);

    void outputDescription() const;

    double computePrice() const;

private:
    int type, size, toppings;
};

int main() {
    Pizza pizza1(DEEP_DISH, MEDIUM, 2);                      // Create pizza objects
    Pizza pizza2(HAND_TOSSED, SMALL, 1);

    pizza1.outputDescription();                              // Output descriptions and prices
    cout << "Price: $" << pizza1.computePrice() << endl;

    pizza2.outputDescription();
    cout << "Price: $" << pizza2.computePrice() << endl;

    system("pause");
    return 0;
}

int Pizza::getType() const { return type; }                  // Accessor functions
int Pizza::getSize() const { return size; }
int Pizza::getToppings() const { return toppings; }

void Pizza::setType(int t) { type = t; }                     // Mutator functions
void Pizza::setSize(int s) { size = s; }
void Pizza::setToppings(int numToppings) { toppings = numToppings; }

void Pizza::outputDescription() const {                      // Output description function
    cout << "Pizza Type: ";
    if (type == DEEP_DISH) cout << "Deep Dish";
    else if (type == HAND_TOSSED) cout << "Hand Tossed";
    else if (type == PAN) cout << "Pan";
    else cout << "Unknown Type";

    cout << ", Size: ";
    if (size == SMALL) cout << "Small";
    else if (size == MEDIUM) cout << "Medium";
    else if (size == LARGE) cout << "Large";
    else cout << "Unknown Size";

    cout << ", Toppings: " << toppings << endl;
}

double Pizza::computePrice() const {                         // Compute price function
    double basePrice = 0.0;
    if (size == SMALL) basePrice = 10.0;
    else if (size == MEDIUM) basePrice = 14.0;
    else if (size == LARGE) basePrice = 17.0;

    return basePrice + (2.0 * toppings);
}