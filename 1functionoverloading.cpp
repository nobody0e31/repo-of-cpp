#include<iostream>
using namespace std;

class calculate {
public:


    int add(int a , int b)
    {
        return (a + b);
    }
    float add(float a , float b)
    {
        return (a + b);
    }
    double add (double a , double b)
    {
        return (a + b);
        
    }
};

int main() {
    calculate c;
   cout << "Add integers: " << c.add(33, 34) << endl;
    
    // Testing the float version (the 'f' tells the compiler these are floats)
    cout << "Add floats: " << c.add(3.5f, 2.4f) << endl;
    
    // Testing the double version
    cout << "Add doubles: " << c.add(10.55, 20.45) << endl;
    
}