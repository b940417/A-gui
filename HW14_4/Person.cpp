#include "Person.h"

Person::Person() : name("") {}

Person::Person(string theName) : name(theName) {}

Person::Person(const Person& theObject) : name(theObject.name) {}

string Person::getName() const {
    return name;
}

Person& Person::operator=(const Person& rtSide) {
    if (this == &rtSide) return *this;
    name = rtSide.name;
    return *this;
}

istream& operator>>(istream& inStream, Person& personObject) {
    inStream >> personObject.name;
    return inStream;
}

ostream& operator<<(ostream& outStream, const Person& personObject) {
    outStream << personObject.name;
    return outStream;
}