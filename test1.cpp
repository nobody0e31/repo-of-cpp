#include<iostream>
using namespace std;

class sum
{
private:
    int n, i, sumVal, a; // Renamed 'sum' variable to 'sumVal' to avoid confusion with class name
public:
    void input()
    {
        cout << "enter n: ";
        cin >> n;
    }
    
    void out()
    {
        sumVal = 0; // FIX 1: Initialize sum to 0 before starting
        
        // FIX 2: Check 'n > 0' instead of 'i > 0'. 
        // We use a while loop because we don't know how many digits there are.
        while(n > 0) 
        {
            a = n % 10;          // Get last digit
            sumVal = sumVal + a; // Add to total
            cout << "digit: " << a << endl;
            n = n / 10;          // Remove last digit
        }
        cout << "sum is " << sumVal << endl;
    }
};

int main()
{
    sum s;
    s.input();
    s.out();
    return 0;
}