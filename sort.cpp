#include <iostream>
#include <vector>
#include <algorithm> // Required for the sort() function

using namespace std;

int main() {
    int n;
    // 1. Read the number of scores
    cin >> n; 
    
    vector<int> scores(n);
    
    // 2. Read all the space-separated scores into the vector
    for(int i = 0; i < n; i++) {
        cin >> scores[i];
    }
    
    // 3. Sort the array in descending order (highest to lowest)
    // greater<int>() tells it to put the biggest numbers first
    sort(scores.begin(), scores.end(), greater<int>());
    
    // 4. The absolute highest score is now guaranteed to be at index 0
    int highest_score = scores[0];
    
    // 5. Loop through the sorted array to find the runner-up
    for(int i = 1; i < n; i++) {
        // The first number we see that is LESS than the highest score is our runner-up!
        if(scores[i] < highest_score) {
            cout << scores[i] << endl;
            break; // Stop looking once we find it
        }
    }
    
    return 0;
}