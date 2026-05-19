#include <iostream>
#include <string> // 1. Added the string library

using namespace std;

class student {
  private:
    int rollno;
    string name; // 2. Switched from char array to standard string

  public:
    // 3. Updated the constructor to accept a string
    student(int r, string n) {
        rollno = r;
        name = n; // Now this works perfectly!
    }

    // 4. Added 'void'
    void display() {
        cout << "Roll: " << rollno << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    // 5. Added quotes around "py"
    student s1(32, "py"); 
    s1.display();
    
    cout << "------------------" << endl;

    // 6. If you want an s2, you have to create it first!
    student s2(45, "Alex");
    s2.display();

    return 0;
}