#include <iostream>
#include "Person.h"
#include "Vehicle.h"
#include "Truck.h"

using namespace std;

int main() {
    // Create Person
    Person owner1("John Doe");
    Person owner2("Jane Smith");

    // Create Vehicle
    Vehicle vehicle1("Toyota", 4, owner1);
    Vehicle vehicle2(vehicle1);  // Copy constructor

    // Create Truck
    Truck truck1("Ford", 6, owner2, 10.5, 20000);
    Truck truck2(truck1);  // Copy constructor

    // Test assignment operator
    Truck truck3;
    truck3 = truck1;

    // Display information
    cout << "Vehicle 1 Manufacturer: " << vehicle1.getManufacturerName() << endl;
    cout << "Vehicle 1 Cylinders: " << vehicle1.getNumCylinders() << endl;
    cout << "Vehicle 1 Owner: " << vehicle1.getOwner() << endl;

    cout << "Truck 1 Manufacturer: " << truck1.getManufacturerName() << endl;
    cout << "Truck 1 Cylinders: " << truck1.getNumCylinders() << endl;
    cout << "Truck 1 Owner: " << truck1.getOwner() << endl;
    cout << "Truck 1 Load Capacity: " << truck1.getLoadCapacity() << " tons" << endl;
    cout << "Truck 1 Towing Capacity: " << truck1.getTowingCapacity() << " pounds" << endl;

    cout << "Truck 3 Manufacturer: " << truck3.getManufacturerName() << endl;
    cout << "Truck 3 Cylinders: " << truck3.getNumCylinders() << endl;
    cout << "Truck 3 Owner: " << truck3.getOwner() << endl;
    cout << "Truck 3 Load Capacity: " << truck3.getLoadCapacity() << " tons" << endl;
    cout << "Truck 3 Towing Capacity: " << truck3.getTowingCapacity() << " pounds" << endl;

    return 0;
}