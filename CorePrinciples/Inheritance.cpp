// Single Inheritance
// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     void sound() {
//         cout << "Animal makes a sound" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void sound() {
//         cout << "Dog barks" << endl;
//     }
// };

// int main() {
//     Dog dog;
//     dog.sound();  // Calls Dog's sound
//     return 0;
// }





// Multiple Inheritance
// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     void sound() {
//         cout << "Animal makes a sound" << endl;
//     }
// };

// class Mammal {
// public:
//     void feed() {
//         cout << "Mammal feeds its young" << endl;
//     }
// };

// class Dog : public Animal, public Mammal {
// public:
//     void sound() {
//         Animal::sound();  // caling super class method
//         cout << "Dog barks" << endl;
//     }
// };

// int main() {
//     Dog dog;
//     dog.sound();  // Calls Dog's sound
//     dog.feed();   // Calls Mammal's feed
//     dog.Animal::sound();  // calling super class methods from derived class objects
//     return 0;
// }





// Multilevel Inheritance
// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     void sound() {
//         cout << "Animal makes a sound" << endl;
//     }
// };

// class Mammal : public Animal {
// public:
//     void feed() {
//         cout << "Mammal feeds its young" << endl;
//     }
// };

// class Dog : public Mammal {
// public:
//     void sound() {
//         cout << "Dog barks" << endl;
//     }
// };

// int main() {
//     Dog dog;
//     dog.sound();  // Calls Dog's sound
//     dog.feed();   // Calls Mammal's feed
//     return 0;
// }





// Hierarchical Inheritance

// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     void sound() {
//         cout << "Animal makes a sound" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void sound() {
//         cout << "Dog barks" << endl;
//     }
// };

// class Cat : public Animal {
// public:
//     void sound() {
//         cout << "Cat meows" << endl;
//     }
// };

// int main() {
//     Dog dog;
//     Cat cat;
//     dog.sound();  // Calls Dog's sound
//     cat.sound();  // Calls Cat's sound
//     return 0;
// }






// Hybrid Inheritance

// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     void sound() {
//         cout << "Animal makes a sound" << endl;
//     }
// };

// class Mammal : public Animal {
// public:
//     void feed() {
//         cout << "Mammal feeds its young" << endl;
//     }
// };

// class Bird : public Animal {
// public:
//     void fly() {
//         cout << "Bird flies" << endl;
//     }
// };

// class Bat : public Mammal, public Bird {
// public:
//     void sound() {
//         cout << "Bat screeches" << endl;
//     }
// };

// int main() {
//     Bat bat;
//     bat.sound();  // Calls Bat's sound
//     bat.feed();   // Calls Mammal's feed
//     bat.fly();    // Calls Bird's fly

//     // Bat inherits from both Mammal and Bird, and both inherit from Animal. So now, Bat has two separate Animal sub-objects, one from Mammal and one from Bird. This causes ambiguity, because which Animal's sound() should it call? This is exactly what's known as the diamond problem.                 
// //     Animal
// //     /    \
// // Mammal   Bird
// //     \    /
// //      Bat

//     // bat.Animal::sound();
//     return 0;
// }





// Handling diamond problem using virtual keyword
#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "A's method" << endl;
    }
};

class B : virtual public A {};
class C : virtual public A {};
class D : public B, public C {};

int main() {
    D d;
    d.show();  // No ambiguity
    return 0;
}
