// Static Variables
// Necessary to declare inside class and define outside class

// Static data members of a class are declared inside the class, but they must be defined outside the class.
// This is because static members:
// Belong to the class itself, not any specific object.
// Must be allocated once in memory, outside the class to avoid multiple definitions.
// Need a separate definition to actually create storage for the variable.



// #include <iostream>
// using namespace std;

// class Counter {
// public:
//     static int count;  // Declaration only

//     Counter() {
//         count++;
//     }

//     void showCount() {
//         cout << "Count: " << count << endl;
//     }
// };

// // Static variable definition (outside the class)
// int Counter::count = 0;

// int main() {
//     Counter c1;
//     Counter c2;
//     c1.showCount(); // Output: Count: 2
//     c2.showCount(); // Output: Count: 2
//     return 0;
// }





// Static Member Functions in C++
// Static member functions belong to the class and can be called without creating an object. These functions can only access other static members directly.

// #include <iostream>
// using namespace std;

// class Utility {
// public:
//     int x = 10;                 // Non-static member
//     static int multiplier;      // Static member

//     // Static function — can access ONLY static members directly
//     static int add(int a, int b) {
//         // return a + b + x; // Error: Cannot access non-static member 'x' here
//         return (a + b) * multiplier;  // OK: accessing static member
//     }
// };

// // Define static member outside the class
// int Utility::multiplier = 2;

// int main() {
//     Utility u;  // Creating object to show non-static member access
//     cout << "Sum: " << Utility::add(5, 3) << endl;  // Output: Sum: 16

//     cout << "Non-static x: " << u.x << endl;  // Output: x = 10
//     return 0;
// }




// Static Variables Inside Functions
// A static variable inside a function retains its value between function calls, unlike normal local variables.
// #include <iostream>
// using namespace std;

// void increment() {
//     static int x = 0;
//     x++;
//     cout << "Value: " << x << endl;
// }

// int main() {
//     increment(); // Value: 1
//     increment(); // Value: 2
//     increment(); // Value: 3
//     return 0;
// }



// Interaction Between Static and Non-Static Members
// A static function cannot access non-static data members directly. To access them, you need to create an object.

#include <iostream>
using namespace std;

class Demo {
public:
    int instanceVar = 10;

    static void staticMethod() {
        Demo obj;
        cout << "Accessing non-static var: " << obj.instanceVar << endl;
    }
};

int main() {
    Demo::staticMethod(); // Output: Accessing non-static var: 10
    return 0;
}
