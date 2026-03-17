#include <iostream>
using namespace std;

class Test {
private:
    int a, b; 

public:
    void input() {
        cout << "Enter a and b: ";
        cin >> a >> b;
    }

    void display() {
        for (int i = a; i <= b; ++i) {
            if (i % 2 == 0) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
};

int main() {
    Test t;
    t.input();
    t.display();
    return 0;
}
