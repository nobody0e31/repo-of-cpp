#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() { cout << "This is a Vehicle." << endl; }
};

class Car : public Vehicle {
public:
    Car() { cout << "This Vehicle is a Car." << endl; }
};

class SportsCar : public Car {
public:
    SportsCar() { cout << "This Car is a Sports Car." << endl; }
};

int main() {
    SportsCar myCar; 
    // Calls constructors in order: Vehicle -> Car -> SportsCar
    return 0;
}