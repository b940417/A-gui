//This is the header file salariedemployee.h.
//This is the interface for the class SalariedEmployee.
#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include <string>
#include "employee.h"

using std::string;

namespace SavitchEmployees
{
    class SalariedEmployee : public Employee
    {
    public:
        SalariedEmployee();
        SalariedEmployee(const string& theName, const string& theSsn, double theWeeklySalary);

        double getSalary() const;
        void setSalary(double newSalary);
        
        void printCheck() ;
        
    protected:  // Changed from private to protected
        double salary;  // weekly
    };
} // namespace SavitchEmployees

#endif // SALARIEDEMPLOYEE_H