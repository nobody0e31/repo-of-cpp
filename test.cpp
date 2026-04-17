#include <iostream>
// FIX 1: Added namespace so cout and cin work
using namespace std; 

template<class T>
// FIX 2: Capitalized 'Swap' to avoid conflicts with built-in C++ functions
class Swap 
{
public:
    // FIX 3: Replaced 'int' with 'T' to actually use the template
    T a, b; 

    void input()
    {
        cout << "Enter value of a and b: ";
        cin >> a >> b;
    }

    void operation()
    {
        // FIX 4: Replaced 'int' with 'T' and fixed the swapping logic
        T temp; 
        temp = a; // Store 'a' safely first
        a = b;    // Overwrite 'a' with 'b'
        b = temp; // Put the safely stored 'a' into 'b'
    }

    void show()
    {
        // Added spaces so the numbers don't print squished together
        cout << "Values after swap: " << a << " " << b << endl; 
    }

}; // FIX 5: Added the mandatory semicolon at the end of the class

// FIX 6: Moved main() completely OUTSIDE of the class. It must return 'int'.
int main()
{
    // FIX 7: Because it's a template, you must tell it what type to use inside < >
    Swap<int> s; 
    
    // FIX 8: Put the method calls in the correct logical order
    s.input();
    s.operation();
    s.show();

    // FIX 9: Placed return inside main()
    return 0; 
}