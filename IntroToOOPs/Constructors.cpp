// Constructors


#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    // Default Constructor: Initializes the object with default values.
    Person() {
        name = "Unknown";  
        age = 0;           
        cout << "Default Constructor called!" << endl;
    }

    // Parameterized Constructor: Initializes the object with provided values.
    Person(string n, int a) {
        name = n;  
        age = a;   
        cout << "Parameterized Constructor called!" << endl;
    }

    // Copy Constructor: Creates a new object by copying an existing object.
    Person(const Person &p) {    // Passing by reference(&). Not necessary to write & and const here, we can pass it by value also(but then A copy of the object is made). The reference is const, so you can’t modify the original object inside the function or constructor, which prevents accidental changes.
        name = p.name;  // Copy name from the passed object
        age = p.age;    // Copy age from the passed object
        cout << "Copy Constructor called!" << endl;
    }

    // Method to display the person's information
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person p1;  // Default constructor will be called here
    p1.display();

    Person p2("Alice", 25);  // Parameterized constructor is called here
    p2.display();

    Person p3 = p2;  // Copy constructor is called here
    p3.display();

    return 0;
}
