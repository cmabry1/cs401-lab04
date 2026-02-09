// main.cpp
#include "Employee.h"

int main() {

    // Dynamic array of Employee pointers (polymorphism)
    Employee* employees[3];

    employees[0] = new RegularEmployee("Alice", 101, 3000, 10);
    employees[1] = new Manager("Bob", 201, 5000, 1500);
    employees[2] = new RegularEmployee("Charlie", 102, 3200, 5);

    // Loop to demonstrate polymorphism
    for (int i = 0; i < 3; i++) {
        employees[i]->displayInfo();
        employees[i]->calculateSalary();
        cout << "------------------------" << endl;
    }

    // Cleanup memory
    for (int i = 0; i < 3; i++) {
        delete employees[i];
    }

    return 0;
}
