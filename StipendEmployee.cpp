// Copyright (c) 2024. Howard Community College All Rights Reserved. Unauthorized Duplication Prohibited.
//

#include <iomanip>
#include "StipendEmployee.h"

using namespace std;

/*
 * Constructs the StipendEmployee, setting the total number of dollars and the total number of hours worked
 * The base class Employee is also initialized correspondingly
 */
StipendEmployee::StipendEmployee(int id, std::string name, double totalDollars, double totalHours) : Employee(id, name) {
    StipendEmployee::totalStipend = totalDollars;
    StipendEmployee::totalHours = totalHours;
}

/*
 * Returns the total number of dollars that are paid to the Employee
 */
double StipendEmployee::getTotalDollars() const {
    return StipendEmployee::totalStipend;
}

/*
 * Returns the total number of hours that are worked by the Employee
 */
double StipendEmployee::getTotalHours() const {
    return StipendEmployee::totalHours;
}

/*
 * Prints the string name, int ID, double Weekly pay as given by totalStipend / (totalHours / 40)
 */
void StipendEmployee::printPay() {
    cout << "Name: " << this->getName() << endl
         << "ID: " << this->getID() << endl;
    cout << setprecision(2);
    cout << fixed;
    cout << "Weekly Pay: $" << this->totalStipend / (totalHours / 40) << endl << endl;
}


