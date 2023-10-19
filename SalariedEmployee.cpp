//
// Created by SaiKM on 10/12/2023.
//

#include "SalariedEmployee.h"

using namespace std;

SalariedEmployee::SalariedEmployee(int employeeID, std::string name, double yearlySalary) : Employee(employeeID, name){
    SalariedEmployee::yearlySalary = yearlySalary;
}

double SalariedEmployee::getYearlySalary() {
    return SalariedEmployee::yearlySalary;
}

void SalariedEmployee::printPay() {
    cout << "ID: " << this->getID() << endl
         << "Name: " << this->getName() << endl
         << "Weekly Pay: $" << (this->getYearlySalary() / 52).;
}
