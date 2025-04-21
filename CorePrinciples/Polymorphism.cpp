// Polymorphism
// Polymorphism is one of the key concepts in object-oriented programming (OOP) and refers to the ability of a single entity (like a method, operator, or object) to behave differently in different contexts. The term “polymorphism” is derived from Greek, meaning “many forms.” In programming, it allows the same method or object to perform different tasks depending on the context.

// There are two main types of polymorphism in Java:
// Compile-Time Polymorphism (Static Polymorphism)
// Run-Time Polymorphism (Dynamic Polymorphism)


// 1. Compile-Time Polymorphism (Static Polymorphism)
// In compile-time polymorphism, the method to be called is resolved at compile time. When we say the method is "resolved" at compile-time, it means that the compiler determines the correct method to invoke based on the method's signature (such as method name, parameters, etc.). It is achieved through method overloading or operator overloading 
// Keypoints:
// Determined at compile-time.
// Faster execution since the binding is done early.
// Examples: Method Overloading

// 2. Run-Time Polymorphism (Dynamic Polymorphism)
// In run-time polymorphism, the method is resolved during the runtime. It is achieved through method overriding. When we say the method is "resolved" at run-time, it refers to the decision about which method (in the case of method overriding) to call being made at the time the program is actually running. 
// Keypoints:
// Determined at runtime.
// Slower execution compared to compile-time polymorphism due to late binding.
// Examples: Method Overriding.






// Method Overloading
// #include <iostream>
// using namespace std;

// class Calculator {
// public:
//     int add(int a, int b) {
//         return a + b;
//     }

//     double add(double a, double b) {
//         return a + b;
//     }
// };

// int main() {
//     Calculator calc;

//     cout << calc.add(4, 3) << endl;     
//     cout << calc.add(5.5, 3.3) << endl;    

//     return 0;
// }





// Method Overriding
#include <iostream>
using namespace std;

// Parent class
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Child class
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

// Main function
int main() {
    Animal* myAnimal = new Dog();  // Base class pointer to derived class object
    myAnimal->sound();             // Calls Dog's sound() due to virtual function

    delete myAnimal;  // Good practice to free memory
    return 0;
}
