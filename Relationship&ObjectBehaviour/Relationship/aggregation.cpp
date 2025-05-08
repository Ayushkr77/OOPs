#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Employee Class
class Employee {
private:
    string name;

public:
    Employee(string n) {
        name = n;
    }

    void display() const {
        cout << "- " << name << endl;
    }
};

// Department Class
class Department {
private:
    vector<Employee*> employees;

public:
    Department(const vector<Employee*>& emps) {
        employees = emps;
    }

    void showEmployees() {
        cout << "Employees in the department:" << endl;
        for (Employee* emp : employees) {
            emp->display();  // Now works because Employee is fully defined
        }
    }
};

int main() {
    // Create employees
    Employee* e1 = new Employee("Ayush");
    Employee* e2 = new Employee("Megha");
    Employee* e3 = new Employee("Rahul");

    // Add employees to a vector
    vector<Employee*> empList = {e1, e2, e3};

    // Create a Department with those employees
    Department d(empList);

    // Display employee names
    d.showEmployees();

    // Clean up
    delete e1;
    delete e2;
    delete e3;

    return 0;
}
