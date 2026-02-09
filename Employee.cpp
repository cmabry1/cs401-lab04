#include "Employee.h"

Employee::Employee() : name("Unknown"), id(0), basicSalary(0.0) {}

Employee::Employee(string n, int i, double salary)
    : name(n), id(i), basicSalary(salary) {}

Employee::~Employee() {}

void Employee::calculateSalary() const {
    cout << "Basic Salary: $" << basicSalary << endl;
}

void Employee::displayInfo() const {
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
}

RegularEmployee::RegularEmployee(string n, int i, double salary, int hours)
    : Employee(n, i, salary), overtimeHours(hours) {}

void RegularEmployee::calculateSalary() const {
    double totalSalary = basicSalary + (overtimeHours * overtimeRate);
    cout << "Total Salary (with overtime): $" << totalSalary << endl;
}

void RegularEmployee::displayInfo() const {
    cout << "\n--- Regular Employee ---" << endl;
    Employee::displayInfo();
    cout << "Overtime Hours: " << overtimeHours << endl;
}

Manager::Manager(string n, int i, double salary, double b)
    : Employee(n, i, salary), bonus(b) {}

void Manager::calculateSalary() const {
    double totalSalary = basicSalary + bonus;
    cout << "Total Salary (with bonus): $" << totalSalary << endl;
}

void Manager::displayInfo() const {
    cout << "\n--- Manager ---" << endl;
    Employee::displayInfo();
    cout << "Bonus: $" << bonus << endl;
}
