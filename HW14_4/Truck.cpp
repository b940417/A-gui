#include "Truck.h"

Truck::Truck() : Vehicle(), loadCapacity(0.0), towingCapacity(0) {}

Truck::Truck(string manufacturerName, int numCylinders, const Person& owner, double loadCapacity, int towingCapacity)
    : Vehicle(manufacturerName, numCylinders, owner), loadCapacity(loadCapacity), towingCapacity(towingCapacity) {}

Truck::Truck(const Truck& other)
    : Vehicle(other), loadCapacity(other.loadCapacity), towingCapacity(other.towingCapacity) {}

double Truck::getLoadCapacity() const {
    return loadCapacity;
}

int Truck::getTowingCapacity() const {
    return towingCapacity;
}

void Truck::setLoadCapacity(double loadCapacity) {
    this->loadCapacity = loadCapacity;
}

void Truck::setTowingCapacity(int towingCapacity) {
    this->towingCapacity = towingCapacity;
}

Truck& Truck::operator=(const Truck& other) {
    if (this == &other) return *this;
    Vehicle::operator=(other);
    loadCapacity = other.loadCapacity;
    towingCapacity = other.towingCapacity;
    return *this;
}