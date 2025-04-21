#include <iostream>
using namespace std;

class Base {
private:
    int privateVar;

protected:
    int protectedVar;

public:
    int publicVar;

    // Constructor to initialize variables
    Base() {
        cout << "Base Constructor Called" << endl;
        privateVar = 1;
        protectedVar = 2;
        publicVar = 3;
    }

    // Destructor
    ~Base() {
        cout << "Base Destructor Called" << endl;
    }

    void showBase() {
        cout << "Base Class - privateVar: " << privateVar << endl;
        cout << "Base Class - protectedVar: " << protectedVar << endl;
        cout << "Base Class - publicVar: " << publicVar << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived constructor called" << endl;
    }
    ~Derived() {
        cout << "Derived destructor called" << endl;
    }

    void showDerived() {
        // cout << "Derived Class - privateVar: " << privateVar << endl;  // Error: privateVar is not accessible
        cout << "Derived Class - protectedVar: " << protectedVar << endl; // Accessible
        cout << "Derived Class - publicVar: " << publicVar << endl;       // Accessible
    }
};

int main() {
    Base baseObj;
    Derived derivedObj; // while creating the object of derived class, first the base class constructor is called and then the derived class constructor is called. If anywhere(base class or derived class), the constructor is not defined explicitly then default constructor is called. AND Destructors are called in the reverse order of constructors.

    cout << "--- Accessing through Base class object ---" << endl;
    baseObj.showBase();
    // cout << baseObj.privateVar << endl;   // Error: private
    // cout << baseObj.protectedVar << endl; // Error: protected
    cout << "Public variable (from main): " << baseObj.publicVar << endl; // Accessible

    cout << "\n--- Accessing through Derived class ---" << endl;
    derivedObj.showDerived();
    cout << "Public variable: " << derivedObj.publicVar << endl;

    return 0;
}
