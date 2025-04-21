// In C++, abstraction is achieved through:
// Abstract Classes (with at least one pure virtual function)
// Interfaces (fully abstract classes)

// C++ does have the concept of abstract classes, but it doesn't have a keyword like abstract (like Java/C#).
// Instead, in C++, a class becomes abstract when it has at least one pure virtual function.



// Abstract Classes and Pure Virtual Functions
// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     virtual void sound() = 0; // Pure virtual function
//     void eat() {
//         cout << "This animal eats food." << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void sound() override {
//         cout << "Dog barks" << endl;
//     }
// };

// class Cat : public Animal {
// public:
//     void sound() override {
//         cout << "Cat meows" << endl;
//     }
// };

// int main() {
//     Animal a;  // Error: cannot instantiate abstract class
//     Dog d;
//     Cat c;
//     d.eat();  // Inherited concrete method
//     d.sound(); // Overridden pure virtual method
//     c.sound();
//     return 0;
// }



// Interface-like Behavior Using Pure Virtual Functions
// C++ doesn’t have a separate interface keyword like Java, but you can create interfaces using classes with only pure virtual functions.
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0;
    virtual void eat() = 0;
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
    void eat() override {
        cout << "Dog eats meat" << endl;
    }
};

int main() {
    // Animal a;  // Error: cannot instantiate abstract class
    Dog d;
    d.sound();
    d.eat();

    Animal* a = &d; // Abstract class pointer pointing to derived class object
    a->sound();    
    return 0;
}
