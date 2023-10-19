//
// Created by SaiKM on 10/12/2023.
//

#ifndef LAB6_EMPLOYEE_H
#define LAB6_EMPLOYEE_H

#include <iostream>

class Employee {
private:
    int employeeID;
    std::string employeeName;

public:
    Employee(int, std::string);

    // return int employeeID
    int getID() const;

    //return std::string getName
    std::string getName() const;

    //overrideable printPay
    //Not given for base class
    virtual void printPay() = 0;
};


#endif //LAB6_EMPLOYEE_H
