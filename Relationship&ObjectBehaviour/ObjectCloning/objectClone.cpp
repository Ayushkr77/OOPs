// SHALLOW CLONING

// #include <iostream>
// using namespace std;

// class Shallow {
// private:
//     int* data;

// public:
//     // Constructor
//     Shallow(int value) {
//         data = new int(value);
//     }

//     // Shallow copy constructor
//     Shallow(const Shallow& other) {
//         data = other.data; // just copying the pointer
//         cout << "Shallow Copy Constructor Called\n";
//     }

//     void setData(int value) {
//         *data = value;
//     }

//     void display() const {
//         cout << "Value: " << *data << endl;
//     }

//     ~Shallow() {
//         delete data;
//         cout << "Destructor Called\n";
//     }
// };

// int main() {
//     Shallow obj1(100);
//     Shallow obj2 = obj1;  // shallow copy

//     obj1.display();
//     obj2.display();

//     cout << "Modifying obj1's data...\n";
//     obj1.setData(200);

//     obj1.display();
//     obj2.display();  // Affected due to shared memory

//     return 0;
// }





// DEEP CLONING
#include <iostream>
#include <string>
using namespace std;

class Address {
public:
    string city;

    // Constructor
    Address(string city) {
        this->city = city;
    }

    // Clone method for deep copy
    Address* clone() const {
        return new Address(city); // Create a new Address object with the same city
    }
};

class Person {
public:
    string name;
    Address* address;

    // Constructor
    Person(string name, Address* address) {
        this->name = name;
        this->address = address;
    }

    // Deep clone method
    Person* clone() const {
        return new Person(name, address->clone());
    }

    // Destructor to free memory
    ~Person() {
        delete address;
    }
};

int main() {
    Address* addr = new Address("Mumbai");
    Person* person1 = new Person("Rahul", addr);

    // Deep cloning
    Person* clonedPerson = person1->clone();

    // Modify the cloned object's address
    clonedPerson->address->city = "New Delhi";

    // Output to verify deep copy
    cout << person1->name << " lives in " << person1->address->city << endl;         // Mumbai
    cout << clonedPerson->name << " lives in " << clonedPerson->address->city << endl; // New Delhi

    // Clean up
    delete person1;
    delete clonedPerson;

    return 0;
}
