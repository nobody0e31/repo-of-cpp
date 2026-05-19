#include <iostream>
using namespace std;

class student {
  private:
    int rollno;
    float marks;

  public:
    // 1. PARAMETERIZED CONSTRUCTOR
    // Used to build a student from scratch using raw numbers
    student(int r, float m) {
        rollno = r;
        marks = m;
    }

    // 2. THE STANDARD COPY CONSTRUCTOR
    // Used to build a new student by cloning an existing one
    student(const student &original) {
        // We look at the 'original' student, and copy their data into our new variables
        rollno = original.rollno;
        marks = original.marks;
        cout << "--> Copy Constructor just ran!" << endl;
    }

    // Display function
    void display() {
        cout << "Roll no: " << rollno << " | Marks: " << marks << endl;
    }
};

int main() {
    // Step 1: Create the first student from scratch. 
    // This triggers the Parameterized Constructor.
    student s1(100, 95.2);
    
    cout << "Student 1 details:" << endl;
    s1.display();

    cout << "\n-------------------\n" << endl;

    // Step 2: Create a second student, and make them a clone of s1.
    // THIS triggers the Copy Constructor!
    student s2 = s1; 
    
    // (Note: You can also write it like this: student s2(s1); Both do the exact same thing)

    cout << "Student 2 details:" << endl;
    s2.display();

    return 0;
}