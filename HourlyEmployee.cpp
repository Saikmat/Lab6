// Copyright (c) 2024. Howard Community College All Rights Reserved. Unauthorized Duplication Prohibited.
//

#include <iomanip>
#include "HourlyEmployee.h"

using namespace std;

/*
 * Constructs the HourlyEmployee with the double hoursWorked and the double payRate
 * Correspondingly constructs the base class with ID and name
 */
HourlyEmployee::HourlyEmployee(int ID, std::string name, double hoursWorked, double payRate) : Employee(ID, name) {
    HourlyEmployee::hoursWorked = hoursWorked;
    HourlyEmployee::payRate = payRate;
}

/*
 * Overridden function for printPay that prints the string Name, int ID, double Weekly Pay
 * as given by hoursWorked * payRate
 */
void HourlyEmployee::printPay() {
    cout << "Name: " << this->getName() << endl
         << "ID: " << this->getID() << endl;
    cout << setprecision(2);
    cout << fixed;
    cout << "Weekly Pay: $" << hoursWorked * payRate << endl << endl;
}

/*
 * Returns the number of hours worked by the employee
 */
double HourlyEmployee::getHoursWorked() const {
    return HourlyEmployee::hoursWorked;
}

/*
 * Returns the pay rate of the employee
 */
double HourlyEmployee::getPayRate() const {
    return HourlyEmployee::payRate;
}
