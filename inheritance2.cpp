#include <iostream>
using namespace std;

class Printer {
public:
    void print() { cout << "Printing document..." << endl; }
};

class Scanner {
public:
    void scan() { cout << "Scanning document..." << endl; }
};

// Copier inherits from both Printer and Scanner
class Copier : public Printer, public Scanner {
public:
    void copy() { cout << "Copying document..." << endl; }
};

int main() {
    Copier myCopier;
    myCopier.print(); // From Printer
    myCopier.scan();  // From Scanner
    myCopier.copy();  // Own method
    return 0;
}