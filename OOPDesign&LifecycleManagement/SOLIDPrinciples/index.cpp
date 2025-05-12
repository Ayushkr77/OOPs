// 1. Single Responsibility Principle (SRP)

// Consider the following example where a class that both calculates employee salary and generates reports. Instead, these responsibilities should be split into separate classes
// Use Case: If we need to modify salary calculation, we only update SalaryCalculator, avoiding unintended issues in report generation.

// #include <iostream>
// using namespace std;

// class Employee {
//     // Employee-related data and methods
// };

// class SalaryCalculator {
//     public:
//         double calculateSalary(Employee emp) {
//             // Salary calculation logic
//             return 0.0; // Placeholder
//         }
//     };
    
//     class ReportGenerator {
//     public:
//         void generateReport(Employee emp) {
//             // Report generation logic
//             cout << "Generating report for employee..." << endl;
//         }
//     };
    





// 2. Open/Closed Principle (OCP)

// Consider an example where the aim is to calculate the area.

// A naive approach will be to form different classes for each shape in the following way:
// class Rectangle {
// public:
//     double calculateArea() { return length * breadth; }
// };

// class Circle {
// public:
//     double calculateArea() { return M_PI * radius * radius; }
// };


// A better approach is using polymorphism:
// class Shape {
// public:
//     virtual double calculateArea() = 0; // pure virtual function
// };

// class Rectangle : public Shape {
// public:
//     double calculateArea() override { return length * breadth; }
// };

// class Circle : public Shape {
// public:
//     double calculateArea() override { return M_PI * radius * radius; }
// };

// Now, if we want to add a Triangle class, we don't need to modify existing code—just extend Shape.
// Use Case: Adding new shapes without modifying existing classes.







// 3. Liskov Substitution Principle (LSP)

// Example (Violation of LSP):
// Imagine a Bird class with a method fly(). If we create a subclass Penguin that cannot fly, we break LSP:
// class Bird {
// public:
//     virtual void fly() { std::cout << "Flying"; }
// };

// class Penguin : public Bird {
// public:
//     void fly() override { throw std::runtime_error("Penguins can't fly!"); }
// };

// Instead, we should refactor using separate interfaces:
// class FlyingBird {
// public:
//     virtual void fly() = 0;
// };

// class Sparrow : public FlyingBird {
// public:
//     void fly() override { std::cout << "Flying high!"; }
// };

// class Penguin {
//     // Penguins do not inherit from FlyingBird
// };

// Now, LSP is preserved because no subclass breaks expected behavior.
// Use Case: Preventing unexpected crashes when substituting subclasses..






// 4. Interface Segregation Principle (ISP)

// Example (Violation of ISP):
// A large interface forces unnecessary method implementation:

// class Worker {
// public:
//     virtual void work() = 0;
//     virtual void eat() = 0;
// };

// class Robot : public Worker {
// public:
//     void work() override { std::cout << "Robot working"; }
//     void eat() override { throw std::runtime_error("Robots don't eat!"); }
// };


// A better approach is splitting into separate interfaces:
// class Workable {
// public:
//     virtual void work() = 0;
// };

// class Eatable {
// public:
//     virtual void eat() = 0;
// };

// class Human : public Workable, public Eatable {
// public:
//     void work() override { std::cout << "Human working"; }
//     void eat() override { std::cout << "Human eating"; }
// };

// class Robot : public Workable {
// public:
//     void work() override { std::cout << "Robot working"; }
// };

// Now, Robot doesn't need to implement eat().
// Use Case: Avoiding unnecessary dependencies in classes.






// 5. Dependency Inversion Principle (DIP)

// Example (Violation of DIP):
// class WiredKeyboard {
// public:
//     void connect() { std::cout << "Connected via wire."; }
// };

// class Computer {
// private:
//     WiredKeyboard keyboard; // Direct dependency
// };


// A better approach is using an interface:

// class Keyboard {
// public:
//     virtual void connect() = 0;
// };

// class WiredKeyboard : public Keyboard {
// public:
//     void connect() override { std::cout << "Connected via wire."; }
// };

// class WirelessKeyboard : public Keyboard {
// public:
//     void connect() override { std::cout << "Connected via Bluetooth."; }
// };

// class Computer {
// private:
//     Keyboard* keyboard;

// public:
//     Computer(Keyboard* k) : keyboard(k) {}
// };

// Now, we can pass any Keyboard type (wired/wireless) without modifying Computer.
// Use Case: Making systems extensible and maintainable.