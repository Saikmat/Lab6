// Copyright (c) 2024. Howard Community College All Rights Reserved. Unauthorized Duplication Prohibited.
//

#include "vector"
#include "main.h"
#include "Employee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"
#include "StipendEmployee.h"

using namespace std;

void getInput(vector<Employee*>&);

void printList(vector<Employee*>&);

void printCopyright();



int main(){
    printCopyright();
    vector<Employee*> employeeVector;
    getInput(employeeVector);
    printList(employeeVector);
    for(auto employee : employeeVector){
        delete employee;
    }
    return 0;
}

/*
 * Takes input for employees
 * Uses a menu-driven platform to pick the correct subclass and initialize the respective values within
 * Has not null parameter of a vector that is updated with each respective object
 */
void getInput(vector<Employee*>& employeeVector){

    cout << "\t\t\t\tWelcome to CMSY-171 Employee Weekly Pay Program\n\n\n\n";

    int input = 0;
    const int HOURLY_EMPLOYEE = 1;
    const int SALARIED_EMPLOYEE = 2;
    const int STIPEND_EMPLOYEE = 3;
    const int END_PROGRAM = 4;
    const string menu = "1. Hourly Employee\n"
                        "2. Salaried Employee\n"
                        "3. Stipent Employee\n"
                        "4. End";
    while (input != 4) {
        cout << menu << "\n\nEnter menu choice: ";
        cin >> input;
        while (input < 1 || input > 4) {
            cout << menu;
            cout << "\nInvalid option, enter a value 1-4\n";
            cin >> input;
        }
        switch (input) {
            case HOURLY_EMPLOYEE: {
                string name;
                int ID;
                int hours;
                int wage;

                cout << "Enter the Employee ID: ";
                cin >> ID;
                while (ID < 100000 || ID > 999999) {
                    cout << "Invalid ID, enter a value between 100000 and 999999";
                    cin >> ID;
                }

                cout << "Enter the Employee Name: ";
                cin >> name;

                cout << "Enter the Employee's hours: ";
                cin >> hours;
                while (hours < 0) {
                    cout << "Invalid input, enter a positive value: ";
                    cin >> hours;
                }

                cout << "Enter the Employee's wage: ";
                cin >> wage;
                while (wage < 0) {
                    cout << "Invalid input, enter a positive value: ";
                    cin >> wage;
                }

                Employee *employee = new HourlyEmployee(ID, name, hours, wage);
                employeeVector.push_back(employee);
                break;
            }
            case SALARIED_EMPLOYEE: {
                string name;
                int ID;
                double yearlySalary;

                cout << "Enter the Employee ID: ";
                cin >> ID;
                while (ID < 100000 || ID > 999999) {
                    cout << "Invalid ID, enter a value between 100000 and 999999";
                    cin >> ID;
                }

                cout << "Enter the Employee Name: ";
                cin >> name;

                cout << "Enter the Employee's yearly salary: ";
                cin >> yearlySalary;
                while (yearlySalary < 0) {
                    cout << "Invalid input, enter a positive value: ";
                    cin >> yearlySalary;
                }
                Employee *employee = new SalariedEmployee(ID, name, yearlySalary);
                employeeVector.push_back(employee);
                break;
            }
            case STIPEND_EMPLOYEE: {
                int ID;
                string name;
                double totalDollars;
                double totalHours;

                cout << "Enter the Employee ID: ";
                cin >> ID;
                while (ID < 100000 || ID > 999999) {
                    cout << "Invalid ID, enter a value between 100000 and 999999";
                    cin >> ID;
                }

                cout << "Enter the Employee Name: ";
                cin >> name;

                cout << "Enter the Employee's Total Hours: ";
                cin >> totalHours;
                while (totalHours < 0) {
                    cout << "Invalid input, enter a positive value: ";
                    cin >> totalHours;
                }

                cout << "Enter the Employee's Total Stipend: ";
                cin >> totalDollars;
                while (totalDollars < 0) {
                    cout << "Invalid input, enter a positive value: ";
                    cin >> totalDollars;
                }
                Employee *employee = new StipendEmployee(ID, name, totalDollars, totalHours);
                employeeVector.push_back(employee);
                break;
            }
            case END_PROGRAM: {
                return;
            }
        }
    }
}

/*
 * Prints values of each Employee within the vector
 * Uses polymorphic function printPay to determine which function is used to display the values
 */
void printList(vector<Employee*>& vector){
    for (Employee* employee: vector) {
        employee->printPay();
    }
}

/*
 * Prints HCC copyright
 */
void printCopyright() {
    cout << "Copyright 2024 - Howard Community College All rights reserved; Unauthorized duplication prohibited\n\n\n\n";
}