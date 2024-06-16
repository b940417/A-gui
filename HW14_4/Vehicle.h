#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include "Person.h"

class Vehicle
{
public:
    Vehicle();
    Vehicle(string manufacturerName, int numCylinders, const Person& owner);
    Vehicle(const Vehicle& other);

    virtual ~Vehicle() {}

    string getManufacturerName() const;
    int getNumCylinders() const;
    Person getOwner() const;

    void setManufacturerName(string manufacturerName);
    void setNumCylinders(int numCylinders);
    void setOwner(const Person& owner);

    Vehicle& operator=(const Vehicle& other);

private:
    string manufacturerName;
    int numCylinders;
    Person owner;
};

#endif