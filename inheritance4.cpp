#include <iostream>
using namespace std;

class Shape {
protected:
    int dimensions;
public:
    void setDimensions(int d) { dimensions = d; }
};

class Circle : public Shape {
public:
    void draw() { cout << "Drawing a Circle with dimension " << dimensions << endl; }
};

class Square : public Shape {
public:
    void draw() { cout << "Drawing a Square with dimension " << dimensions << endl; }
};

int main() {
    Circle c;
    c.setDimensions(5);
    c.draw();

    Square s;
    s.setDimensions(4);
    s.draw();
    return 0;
}