//
// Created by SaiKM on 10/12/2023.
//

#ifndef LAB6_SALARIEDEMPLOYEE_H
#define LAB6_SALARIEDEMPLOYEE_H

#include <iostream>
#include "Employee.h"

class SalariedEmployee : public Employee{
private:
    double yearlySalary;
public:
    SalariedEmployee(int employeeID, std::string name, double yearlySalary);

    double getYearlySalary();

    void printPay() override;
};


#endif //LAB6_SALARIEDEMPLOYEE_H
