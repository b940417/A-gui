#include "Vehicle.h"

Vehicle::Vehicle() : manufacturerName(""), numCylinders(0), owner() {}

Vehicle::Vehicle(string manufacturerName, int numCylinders, const Person& owner)
    : manufacturerName(manufacturerName), numCylinders(numCylinders), owner(owner) {}

Vehicle::Vehicle(const Vehicle& other)
    : manufacturerName(other.manufacturerName), numCylinders(other.numCylinders), owner(other.owner) {}

string Vehicle::getManufacturerName() const {
    return manufacturerName;
}

int Vehicle::getNumCylinders() const {
    return numCylinders;
}

Person Vehicle::getOwner() const {
    return owner;
}

void Vehicle::setManufacturerName(string manufacturerName) {
    this->manufacturerName = manufacturerName;
}

void Vehicle::setNumCylinders(int numCylinders) {
    this->numCylinders = numCylinders;
}

void Vehicle::setOwner(const Person& owner) {
    this->owner = owner;
}

Vehicle& Vehicle::operator=(const Vehicle& other) {
    if (this == &other) return *this;
    manufacturerName = other.manufacturerName;
    numCylinders = other.numCylinders;
    owner = other.owner;
    return *this;
}