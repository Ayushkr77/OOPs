// One-to-One Association
// Example: Person <-> Passport

// #include <iostream>
// using namespace std;

// class Passport {
// public:
//     string number;

//     Passport(string num) {
//         number = num;
//     }
// };

// class Person {
// public:
//     string name;
//     Passport* passport; // one-to-one association
//     Person(string n, Passport* p) {
//         name = n;
//         passport = p;
//     }
//     void showDetails() {
//         cout << name << " has passport: " << passport->number << endl;
//     }
// };

// int main() {
//     Passport p("X123");
//     Person person("Ayush", &p);
//     person.showDetails();
//     return 0;
// }





// One-to-Many Association
// Example: A Teacher teaches multiple Students

// #include <iostream>
// #include <vector>
// using namespace std;

// class Student {
// public:
//     string name;
//     Student(string n) {
//         name = n;
//     }
// };

// class Teacher {
// public:
//     string name;
//     vector<Student*> students; // one-to-many association
//     Teacher(string n) {
//         name = n;
//     }
//     void addStudent(Student* s) {
//         students.push_back(s);
//     }
//     void showStudents() {
//         cout << name << " teaches:" << endl;
//         for (auto s : students)
//             cout << "- " << s->name << endl;
//     }
// };

// int main() {
//     Teacher t("Mr. Kumar");
//     Student s1("Aman"), s2("Riya");

//     t.addStudent(&s1);
//     t.addStudent(&s2);

//     t.showStudents();
//     return 0;
// }





// Many-to-Many Association
// Example: Students can enroll in many Courses, and each Course can have many Students

#include <iostream>
#include <vector>
using namespace std;

class Course; // Forward declaration

class Student {
public:
    string name;
    vector<Course*> courses;
    Student(string n) {
        name = n;
    }
    void enroll(Course* c);
};

class Course {
public:
    string title;
    vector<Student*> students;
    Course(string t) {
        title = t;
    }
    void addStudent(Student* s) {
        students.push_back(s);
    }
};

void Student::enroll(Course* c) {
    courses.push_back(c);
    c->addStudent(this); // two-way linkage
}

int main() {
    Student s1("Ayush"), s2("Megha");
    Course c1("Math"), c2("Science");

    s1.enroll(&c1);
    s1.enroll(&c2);
    s2.enroll(&c1);

    cout << s1.name << " is enrolled in:\n";
    for (auto c : s1.courses)
        cout << "- " << c->title << endl;

    cout << "\n" << c1.title << " has students:\n";
    for (auto s : c1.students)
        cout << "- " << s->name << endl;

    return 0;
}
