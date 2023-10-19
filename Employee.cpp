//
// Created by SaiKM on 10/12/2023.
//

#include "Employee.h"

Employee::Employee(int, std::string) {

}

int Employee::getID() const {
    return Employee::employeeID;
}

std::string Employee::getName() const{
    return Employee::employeeName;
}
