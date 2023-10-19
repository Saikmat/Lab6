//
// Created by SaiKM on 10/12/2023.
//

#include <iomanip>
#include "SalariedEmployee.h"

using namespace std;

/*
 * Constructs the Salaried Employee and initializes the base class correspondingly
 * Takes int Employee ID, string Name, and double Yearly salary
 */
SalariedEmployee::SalariedEmployee(int employeeID, std::string name, double yearlySalary) : Employee(employeeID, name){
    SalariedEmployee::yearlySalary = yearlySalary;
}

/*
 * Returns the double yearly salary
 */
double SalariedEmployee::getYearlySalary() {
    return SalariedEmployee::yearlySalary;
}

/*
 * Prints the pay of Salaried Employees
 * Includes string name and int ID from base class, and the weekly pay as given by the yearly salary / 52
 */
void SalariedEmployee::printPay() {
    cout << "Name: " << this->getName() << endl
         << "ID: " << this->getID() << endl;
    cout << setprecision(2);
    cout << fixed;
    cout << "Weekly Pay: $" << (this->getYearlySalary() / 52) << endl << endl;
}
