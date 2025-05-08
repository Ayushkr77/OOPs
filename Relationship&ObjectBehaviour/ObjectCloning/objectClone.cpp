// SHALLOW CLONING

#include <iostream>
using namespace std;

class Shallow {
private:
    int* data;

public:
    // Constructor
    Shallow(int value) {
        data = new int(value);
    }

    // Shallow copy constructor
    Shallow(const Shallow& other) {
        data = other.data; // just copying the pointer
        cout << "Shallow Copy Constructor Called\n";
    }

    void setData(int value) {
        *data = value;
    }

    void display() const {
        cout << "Value: " << *data << endl;
    }

    ~Shallow() {
        delete data;
        cout << "Destructor Called\n";
    }
};

int main() {
    Shallow obj1(100);
    Shallow obj2 = obj1;  // shallow copy

    obj1.display();
    obj2.display();

    cout << "Modifying obj1's data...\n";
    obj1.setData(200);

    obj1.display();
    obj2.display();  // Affected due to shared memory

    return 0;
}
