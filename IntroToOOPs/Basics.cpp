#include <iostream>
using namespace std;

class Person {
private:
    string name; // attributes
    int age;

public:  // if dont public, default is private
    Person(string personName, int personAge) {  // methods
        name = personName;
        age = personAge;
    }
    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // 1. Stack Allocation (Automatic memory)
    Person stackPerson("Ayush", 21);  // Created on the stack
    cout << "Stack Object Output:" << endl;
    stackPerson.displayInfo();  // Use . (dot) operator

    // 2. Heap Allocation (Dynamic memory)
    Person* heapPerson = new Person("Ravi", 25);  // Created on the heap
    cout << "\nHeap Object Output:" << endl;
    heapPerson->displayInfo();  // Use -> (arrow) operator for pointers

    // 🧹 Always free heap memory when done
    delete heapPerson;

    return 0;
}
