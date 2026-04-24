#include <iostream>
#include <string>

using namespace std;

// 1. The Base Class (Parent)
class Person {
  public:
    string name;

    void breathe() {
        cout << name << " is taking a breath." << endl;
    }
};

// 2. The Derived Class (Child)
// The syntax "class Child : public Parent" creates the inheritance
class Student : public Person {
  public:
    int roll;

    void study() {
        // The student can use 'name' because it inherited it from Person!
        cout << name << " is studying hard for exams." << endl;
    }
};

int main() {
    Student s1;
    
    // Setting properties. 'name' comes from Person, 'roll' comes from Student.
    s1.name = "Alice"; 
    s1.roll = 101;

    // Calling methods
    s1.breathe(); // Inherited from Person
    s1.study();   // Unique to Student

    return 0;
}