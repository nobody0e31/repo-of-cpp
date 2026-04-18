#include<iostream>
using namespace std;

class point {
public:
    // 1. Changed 'a' and 'b' to 'x' and 'y' to match how you use them later
    int x, y;

    // Constructor
    point(int xVal = 0, int yVal = 0) {
        x = xVal;
        y = yVal;
    }
    
    // 2. Fixed return type: Removed the extra 'int' before 'point'
    point operator+(const point & obj) {
        point result;
        result.x = this->x + obj.x;
        result.y = this->y + obj.y;

        return result;
    }

    // 3. Added the missing operator- so p1 - p2 works in main()
    point operator-(const point & obj) {
        point result;
        result.x = this->x - obj.x;
        result.y = this->y - obj.y;

        return result;
    }

    // 4. Fixed to print the actual member variables
    void display() {
        cout << "Coordinates: " << x << " " << y << endl;
    }
};

int main() {
    point p1(19, 35);
    point p2(5, 3);

    cout << "Point 1: ";
    p1.display();
    
    cout << "Point 2: ";
    p2.display();
    
    point p3 = p1 + p2;
    point p4 = p1 - p2; // This now works!
    
    cout << "\nAfter Addition: ";
    p3.display();
    
    cout << "After Subtraction: ";
    p4.display();

    return 0;
}