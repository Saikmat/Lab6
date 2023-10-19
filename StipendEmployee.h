//
// Created by SaiKM on 10/19/2023.
//

#ifndef LAB6_STIPENDEMPLOYEE_H
#define LAB6_STIPENDEMPLOYEE_H

#include "Employee.h"



class StipendEmployee : public Employee {
private:
    double totalHours;
    double totalStipend;

public:
    //constructs the stipendEmployee
    StipendEmployee(int, std::string, double, double);

    //Returns totalHours
    double getTotalHours() const;

    //Returns totalStipend
    double getTotalDollars() const;

    //Prints the std::string name, int ID, double totalHours, double totalStipend
    void printPay() override;

};


#endif //LAB6_STIPENDEMPLOYEE_H
