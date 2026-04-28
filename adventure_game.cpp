#include <iostream>
#include <string>
using namespace std;

// Function declarations
void startingRoom();
void forestRoom();
void caveRoom();
void treaureRoom();

// Global variable to control game flow
bool gameActive = true;

// Room 1: Starting Location (Town Square)
void startingRoom() {
    cout << "\n========== TOWN SQUARE ==========" << endl;
    cout << "You stand in the center of a peaceful town square." << endl;
    cout << "There are two paths ahead of you:" << endl;
    cout << "1. Walk to the Dark Forest (East)" << endl;
    cout << "2. Enter a mysterious Cave (West)" << endl;
    cout << "3. Exit Game" << endl;
    cout << "================================" << endl;
    
    int choice;
    cout << "\nEnter your choice (1-3): ";
    cin >> choice;
    
    switch(choice) {
        case 1:
            forestRoom();
            break;
        case 2:
            caveRoom();
            break;
        case 3:
            cout << "\nThanks for playing! Goodbye." << endl;
            gameActive = false;
            break;
        default:
            cout << "\nInvalid choice. Try again." << endl;
            startingRoom();
    }
}

// Room 2: Dark Forest
void forestRoom() {
    cout << "\n========== DARK FOREST ==========" << endl;
    cout << "You enter a dark forest filled with tall trees." << endl;
    cout << "The air is cool and mysterious..." << endl;
    cout << "\nWhat do you do?" << endl;
    cout << "1. Search for treasure path (North)" << endl;
    cout << "2. Return to Town Square (South)" << endl;
    cout << "3. Try to climb a tree for a better view" << endl;
    cout << "================================" << endl;
    
    int choice;
    cout << "\nEnter your choice (1-3): ";
    cin >> choice;
    
    switch(choice) {
        case 1:
            treaureRoom();
            break;
        case 2:
            cout << "\nYou carefully make your way back to the town square." << endl;
            startingRoom();
            break;
        case 3:
            cout << "\nYou climb a tree and see a golden light in the distance!" << endl;
            cout << "You decide to investigate..." << endl;
            treaureRoom();
            break;
        default:
            cout << "\nInvalid choice. Try again." << endl;
            forestRoom();
    }
}

// Room 3: Cave
void caveRoom() {
    cout << "\n=========== CAVE ==============" << endl;
    cout << "You enter a dark cave. You hear the sound of dripping water." << endl;
    cout << "Your eyes slowly adjust to the darkness..." << endl;
    cout << "\nWhat do you do?" << endl;
    cout << "1. Use your torch to explore deeper" << endl;
    cout << "2. Return to Town Square (Exit)" << endl;
    cout << "3. Follow the sound of rushing water" << endl;
    cout << "================================" << endl;
    
    int choice;
    cout << "\nEnter your choice (1-3): ";
    cin >> choice;
    
    switch(choice) {
        case 1:
            cout << "\nYou light your torch and venture deeper into the cave..." << endl;
            cout << "You find ancient inscriptions on the walls!" << endl;
            cout << "Suddenly, you discover a hidden passage to the North!" << endl;
            treaureRoom();
            break;
        case 2:
            cout << "\nYou carefully exit the cave back to daylight." << endl;
            startingRoom();
            break;
        case 3:
            cout << "\nYou follow the sound of water and find an underground river." << endl;
            cout << "You decide to follow it..." << endl;
            treaureRoom();
            break;
        default:
            cout << "\nInvalid choice. Try again." << endl;
            caveRoom();
    }
}

// Room 4: Treasure Chamber (Ending Room)
void treaureRoom() {
    cout << "\n====== TREASURE CHAMBER =======" << endl;
    cout << "You've discovered a magnificent treasure chamber!" << endl;
    cout << "Golden light fills the room, illuminating piles of gold coins" << endl;
    cout << "and precious gems. You found the legendary treasure!" << endl;
    cout << "\nWhat do you do?" << endl;
    cout << "1. Take the treasure and return to town (Ending)" << endl;
    cout << "2. Return to explore more" << endl;
    cout << "================================" << endl;
    
    int choice;
    cout << "\nEnter your choice (1-2): ";
    cin >> choice;
    
    switch(choice) {
        case 1:
            cout << "\n🎉 CONGRATULATIONS! 🎉" << endl;
            cout << "You've successfully found the treasure and become wealthy!" << endl;
            cout << "Your adventure is complete!" << endl;
            gameActive = false;
            break;
        case 2:
            cout << "\nWhich way would you like to go?" << endl;
            cout << "1. Back to the Forest" << endl;
            cout << "2. Back to the Cave" << endl;
            cout << "3. Back to Town Square" << endl;
            int move;
            cout << "Enter your choice (1-3): ";
            cin >> move;
            
            if(move == 1) forestRoom();
            else if(move == 2) caveRoom();
            else if(move == 3) startingRoom();
            else {
                cout << "Invalid choice. Going back to treasure room..." << endl;
                treaureRoom();
            }
            break;
        default:
            cout << "\nInvalid choice. Try again." << endl;
            treaureRoom();
    }
}

// Main function
int main() {
    cout << "╔════════════════════════════════╗" << endl;
    cout << "║   WELCOME TO ADVENTURE GAME    ║" << endl;
    cout << "║   Find the Hidden Treasure!    ║" << endl;
    cout << "╚════════════════════════════════╝" << endl;
    cout << "\nYour quest begins in the town square..." << endl;
    
    while(gameActive) {
        startingRoom();
    }
    
    return 0;
}
