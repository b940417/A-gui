#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include <string>
#include "salariedemployee.h"

using std::string;

namespace SavitchEmployees {

    class Administrator : public SalariedEmployee {
    public:
        Administrator();
        Administrator(const string& theName, const string& theSsn, double theAnnualSalary,
            const string& theTitle, const string& theResponsibilityArea, const string& theSupervisor);
        
        void setTitle(const string& newTitle);
        void setResponsibilityArea(const string& newResponsibilityArea);
        void setSupervisor(const string& newSupervisor);

        void readData();
        void print() const;
        void printCheck();

    protected:
        string title;
        string responsibilityArea;
        string supervisor;
        double annualSalary; // This is in addition to the weekly salary from SalariedEmployee
    };
} // namespace SavitchEmployees

#endif // ADMINISTRATOR_H