#include <iostream>
using namespace std;

class Fibonacci {
private:
    int n; // Number of terms to generate

public:
    // 1. Parameterized Constructor
    // It takes 'terms' as an argument when the object is created
    Fibonacci(int terms) {
        n = terms;
    }

    // 2. Function to calculate and print the series
    void displaySeries() {
        int t1 = 0;
        int t2 = 1;
        int nextTerm = 0;

        cout << "Fibonacci Series up to " << n << " terms: \n";

        for (int i = 1; i <= n; ++i) {
            // Print the first term
            if(i == 1) {
                cout << t1 << " ";
                continue;
            }
            // Print the second term
            if(i == 2) {
                cout << t2 << " ";
                continue;
            }
            
            // Calculate and print the next terms
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
            
            cout << nextTerm << " ";
        }
        cout << endl;
    }
};

int main() {
    int num;
    
    cout << "Enter the number of terms for the Fibonacci series: ";
    cin >> num;

    // 3. Creating the object and passing the argument to the constructor
    Fibonacci myFibonacci(num);
    
    // 4. Calling the display function
    myFibonacci.displaySeries();

    return 0;
}