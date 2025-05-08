// A template in C++ is a feature that allows functions and classes to operate with generic types. This means you can write a single function or class to work with different data types without rewriting code for each type.

// Templates promote code reusability, type safety, and generic programming.



// Function Template Syntax & Example

// #include <iostream>
// using namespace std;

// // Template definition
// template <typename T>  // or template <class T>
// T add(T a, T b) {
//     return a + b;
// }

// int main() {
//     cout << add<int>(5, 10) << endl;        // Outputs: 15
//     cout << add<double>(5.5, 4.5) << endl;  // Outputs: 10
//     cout << add<string>("Hi ", "there") << endl;  // Outputs: Hi there
//     return 0;
// }




// Class Template Syntax & Example

#include <iostream>
using namespace std;

// Template definition
template <typename T>
class Container {
private:
    T value;

public:
    Container(T val) : value(val) {}

    void show() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Container<int> c1(100);
    Container<string> c2("Template Example");

    c1.show();  // Output: Value: 100
    c2.show();  // Output: Value: Template Example

    return 0;
}
