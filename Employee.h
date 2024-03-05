// Copyright (c) 2024. Howard Community College All Rights Reserved. Unauthorized Duplication Prohibited.
//

#ifndef LAB6_EMPLOYEE_H
#define LAB6_EMPLOYEE_H

#include <iostream>

class Employee {
private:
    int employeeID;
    std::string employeeName;

public:
    //Initializes employeeID and employeeName
    Employee(int, std::string);

    // return int employeeID
    int getID() const;

    //return std::string getName
    std::string getName() const;

    //overrideable printPay
    //Not given for base class
    virtual void printPay() = 0;

    virtual ~Employee() = default;
};


#endif //LAB6_EMPLOYEE_H
