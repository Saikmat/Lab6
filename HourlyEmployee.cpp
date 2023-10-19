//
// Created by SaiKM on 10/12/2023.
//

#include "HourlyEmployee.h"

using namespace std;

HourlyEmployee::HourlyEmployee(int ID, std::string name, double hoursWorked, double payRate) : Employee(ID, name) {
    HourlyEmployee::hoursWorked = hoursWorked;
    HourlyEmployee::payRate = payRate;
}

void HourlyEmployee::printPay() {
    cout << hoursWorked * payRate;
}
