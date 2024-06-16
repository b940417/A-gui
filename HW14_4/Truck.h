#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle
{
public:
    Truck();
    Truck(string manufacturerName, int numCylinders, const Person& owner, double loadCapacity, int towingCapacity);
    Truck(const Truck& other);

    double getLoadCapacity() const;
    int getTowingCapacity() const;

    void setLoadCapacity(double loadCapacity);
    void setTowingCapacity(int towingCapacity);

    Truck& operator=(const Truck& other);

private:
    double loadCapacity;
    int towingCapacity;
};

#endif