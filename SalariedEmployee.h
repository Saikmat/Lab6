// Copyright (c) 2023. Howard Community College All Rights Reserved. Unauthorized Duplication Prohibited.
//

#ifndef LAB6_SALARIEDEMPLOYEE_H
#define LAB6_SALARIEDEMPLOYEE_H

#include <iostream>
#include "Employee.h"

class SalariedEmployee : public Employee{
private:
    double yearlySalary;
public:
    SalariedEmployee(int, std::string, double);

    //Returns double yearlySalary
    double getYearlySalary();

    //Prints std::string name, int ID, double yearlySalary
    void printPay() override;
};


#endif //LAB6_SALARIEDEMPLOYEE_H
