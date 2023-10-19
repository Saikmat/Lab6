// Copyright (c) 2023. Howard Community College All Rights Reserved. Unauthorized Duplication Prohibited.
//

#ifndef LAB6_HOURLYEMPLOYEE_H
#define LAB6_HOURLYEMPLOYEE_H

#include "Employee.h"

class HourlyEmployee : public Employee{

private:
    double hoursWorked;
    double payRate;

public:
    HourlyEmployee(int, std::string, double, double);

    //returns double hoursWorked
    double getHoursWorked();

    //returns double payRate
    double getPayRate();

    //Prints std::string name, int ID, double hoursWorked, double payRate
    void printPay() override;
};


#endif //LAB6_HOURLYEMPLOYEE_H
