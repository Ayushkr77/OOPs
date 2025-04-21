// Method overriding allows a subclass to provide a specific implementation of a method that is already defined in its base class. This is a core feature of polymorphism in object-oriented programming (OOP). When a subclass method has the same signature as a method in its superclass, and the method is called on a subclass object, the overridden method in the subclass is executed.

// Runtime Polymorphism (also known as Dynamic Polymorphism)

// Rules for Method Overriding:
// The method in the subclass must have the same name, return type, and parameters as the method in the superclass.
// The method in the base class must be virtual (for dynamic polymorphism).
// The method in the subclass should have the same access level (or more permissive) than in the base class.

// Method Overriding occurs when a subclass provides a specific implementation of a method already defined in its parent class.
// Method Overriding requires inheritance; occurs between a parent class and its subclass.
// In Method Overriding, the method must have the same parameter list as the method in the parent class.
// The access modifier in the overriding method cannot be more restrictive than in the parent class.



// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     // Virtual function to be overridden
//     virtual void sound() {   // must be virtual
//         cout << "Animal makes a sound" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     // Overriding the sound method
//     void sound() override {  // not necessary to write override keyword
//         cout << "Dog barks" << endl;
//     }
// };

// class Cat : public Animal {
// public:
//     // Overriding the sound method
//     void sound() override {
//         cout << "Cat meows" << endl;
//     }
// };

// int main() {
//     Animal* animal1 = new Dog();  // Create Dog object but treat as Animal
//     Animal* animal2 = new Cat();  // Create Cat object but treat as Animal

//     // Calling the overridden methods
//     animal1->sound();  // Dog barks
//     animal2->sound();  // Cat meows

//     delete animal1;
//     delete animal2;

//     return 0;
// }





// Without virtual keyword (No Overriding)

// #include <iostream>
// using namespace std;
// class Animal {
//     public:
//         void sound() { // Not virtual
//             cout << "Animal makes a sound" << endl;
//         }
//     };
    
//     class Dog : public Animal {
//     public:
//         void sound() { // Attempt to override
//             cout << "Dog barks" << endl;
//         }
//     };
    
//     int main() {
//         Animal* animal = new Dog();   // Animal* – This declares a pointer to the base class Animal.   new Dog() – This creates a new object of the derived class Dog on the heap and returns a pointer to it.  = – The pointer returned by new Dog() is assigned to the base class pointer animal.
        
//         animal->sound(); // Calls Animal's sound, not Dog's sound
    
//         delete animal;
//         return 0;
//     }
    






// Method Overloading
// Method Overloading occurs when two or more methods in the same class have the same name but different parameter lists (number, type, or order of parameters).
// Method Overloading does not require inheritance. It happens within the same class.
// In Method Overloading, methods must have different parameter lists (number, type, or order).
// In Method Overloading, methods can have any access modifier; no restrictions.

// Compile-time Polymorphism, also known as Static Polymorphism.

// You cannot overload functions just by changing the return type:
// int add(int a, int b);
// double add(int a, int b); // Error: cannot overload by return type alone

#include <iostream>
using namespace std;

class Calculator {
public:
    // Method 1: Two integers
    int add(int a, int b) {
        return a + b;
    }

    // Method 2: Two doubles
    double add(double a, double b) {
        return a + b;
    }

    // Method 3: Three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator calc;

    cout << "add(2, 3): " << calc.add(2, 3) << endl;             // Calls int add(int, int)
    cout << "add(2.5, 3.7): " << calc.add(2.5, 3.6) << endl;     // Calls double add(double, double)
    cout << "add(1, 2, 3): " << calc.add(1, 2, 3) << endl;       // Calls int add(int, int, int)

    return 0;
}


// Learn about operator overloading...