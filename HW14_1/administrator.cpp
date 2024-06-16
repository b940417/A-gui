#include "administrator.h"
#include <iostream>

using namespace std;

namespace SavitchEmployees {

    Administrator::Administrator() : SalariedEmployee(), title("No title"), responsibilityArea("No area"), supervisor("No supervisor"), annualSalary(0.0) {
        // intentionally left empty
    }

    Administrator::Administrator(const string& theName, const string& theSsn, double theAnnualSalary,
        const string& theTitle, const string& theResponsibilityArea, const string& theSupervisor)
        : SalariedEmployee(theName, theSsn, theAnnualSalary / 52), // Assuming weekly salary is annualSalary / 52
        title(theTitle), responsibilityArea(theResponsibilityArea), supervisor(theSupervisor), annualSalary(theAnnualSalary) {
        // intentionally left empty
    }
     
    void Administrator::setTitle(const string& newTitle) {
        title = newTitle;
    }

    void Administrator::setResponsibilityArea(const string& newResponsibilityArea) {
        responsibilityArea = newResponsibilityArea;
    }

    void Administrator::setSupervisor(const string& newSupervisor) {
        supervisor = newSupervisor;
    }

    void Administrator::readData() {
        string input;
        double salary;

        cout << "Enter administrator's name: ";
        getline(cin, input);
        setName(input);

        cout << "Enter administrator's SSN: ";
        getline(cin, input);
        setSsn(input);

        cout << "Enter administrator's title: ";
        getline(cin, title);

        cout << "Enter administrator's responsibility area: ";
        getline(cin, responsibilityArea);

        cout << "Enter administrator's supervisor's name: ";
        getline(cin, supervisor);

        cout << "Enter administrator's annual salary: ";
        cin >> salary;
        annualSalary = salary;
        setSalary(annualSalary / 52);
    }

    void Administrator::print() const {
        cout << "Name: " << getName() << endl;
        cout << "SSN: " << getSsn() << endl;
        cout << "Title: " << title << endl;
        cout << "Responsibility Area: " << responsibilityArea << endl;
        cout << "Supervisor: " << supervisor << endl;
        cout << "Annual Salary: " << annualSalary << endl;
    }

    void Administrator::printCheck() {
        setNetPay(getSalary()); // Weekly salary
        cout << "\n__________________________________________________\n";
        cout << "Pay to the order of " << getName() << endl;
        cout << "The sum of " << getNetPay() << " Dollars\n";
        cout << "_________________________________________________\n";
        cout << "Check Stub NOT NEGOTIABLE \n";
        cout << "Employee Number: " << getSsn() << endl;
        cout << "Administrator. Annual Salary: " << annualSalary << ", Weekly Pay: " << getSalary() << endl;
        cout << "Title: " << title << endl;
        cout << "Responsibility Area: " << responsibilityArea << endl;
        cout << "Supervisor: " << supervisor << endl;
        cout << "_________________________________________________\n";
    }

} // namespace SavitchEmployees