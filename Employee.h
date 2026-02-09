#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    int id;
    double basicSalary;

public:
    // Constructors
    Employee();
    Employee(string n, int i, double salary);

    // Virtual destructor for polymorphism
    virtual ~Employee();

    // Virtual methods
    virtual void calculateSalary() const;
    virtual void displayInfo() const;
};

class RegularEmployee : public Employee {
private:
    int overtimeHours;
    const double overtimeRate = 20.0;  // example rate per hour

public:
    RegularEmployee(string n, int i, double salary, int hours);

    void calculateSalary() const override;
    void displayInfo() const override;
};

class Manager : public Employee {
private:
    double bonus;

public:
    Manager(string n, int i, double salary, double b);

    void calculateSalary() const override;
    void displayInfo() const override;
};

#endif
