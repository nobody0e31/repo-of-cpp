#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string name;
    int roll;

    // This creates and opens the file in one step
    ofstream file("studenlt.txt");
    
    // Check if the file opened successfully
    if (file.is_open()) {
        cout << "Enter name and roll number: " << endl;
        cin >> name >> roll;

        file << "name : " << name << endl;
        file << "roll number : " << roll << endl;

        file.close();
        cout << "Data saved successfully to studenlt.txt!" << endl;
    } else {
        cout << "Error: Could not create the file." << endl;
    }

    return 0;
}