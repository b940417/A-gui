#include <iostream>
#include "administrator.h"

using namespace SavitchEmployees;

int main() {
    Administrator admin;
    admin.readData();
    admin.print();
    admin.printCheck();

    return 0;
}