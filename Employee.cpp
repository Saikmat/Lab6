// Copyright (c) 2024. Howard Community College All Rights Reserved. Unauthorized Duplication Prohibited.
//

#include "Employee.h"

/*
 * Constructor for the base class
 * Takes int ID and string employeeName
 */
Employee::Employee(int employeeID, std::string employeeName) {
    Employee::employeeID = employeeID;
    Employee::employeeName = employeeName;
}

/*
 * Returns the ID of the employee
 * Can be used in all derived classes
 */
int Employee::getID() const {
    return Employee::employeeID;
}

/*
 * Returns the name of the employee
 * Can be used in all derived classes
 */
std::string Employee::getName() const{
    return Employee::employeeName;
}

