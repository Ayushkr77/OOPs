#include <iostream>

class MyClass {
public:
    // Constructor: Called when the object is created
    MyClass() { 
        std::cout << "Constructor: Object created\n"; 
    }

    // Destructor: Called when the object is destroyed
    ~MyClass() { 
        std::cout << "Destructor: Cleaning up resources\n"; 
    }

    // Method to display a greeting
    void greet() { 
        std::cout << "Hello, World!\n"; 
    }
};

int main() {
    std::cout << "Creating stack object...\n";
    // Stack allocation: Object created on the stack
    MyClass stackObj;  // Constructor is called here
    stackObj.greet();  // Using the object

    std::cout << "\nCreating heap object...\n";
    // Heap allocation: Object created on the heap using `new`
    MyClass* heapObj = new MyClass();  // Constructor is called here
    heapObj->greet();  // Using the object

    std::cout << "\nDeleting heap object...\n";
    // Deallocate memory and invoke the destructor for the heap-allocated object
    delete heapObj;  // Destructor is called here, and memory is deallocated

    std::cout << "\nEnd of main function.\n";
    return 0;
}
