#include<iostream>
using namespace std;
class Player {
public:
    static int playerCount; // 1. Declaration inside the class
    
    Player() {
        playerCount++; // Increment whenever a new player is created
    }
};

// 2. Definition and initialization outside the class
int Player::playerCount = 0; 

int main() {
    Player p1, p2;
    // Accessing via class name (Recommended)
    std::cout << Player::playerCount; // Output: 2
}
