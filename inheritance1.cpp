#include <iostream>
using namespace std;

class Animal { // Base Class
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal { // Derived Class
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat();  // Inherited from Animal
    myDog.bark(); // Own method
    return 0;
}