// CSC 134
// M6HW1
// Keora James 
// 04/28/26

#include <iostream>
#include <string>

using namespace std;

int main() {
    int choice;

    cout << R"(Long ago, in a forgotten land hidden deep within the mountains, there stood a mysterious structure known as The Hall of Three Doors. Legends say it was created by an unknown force to test those brave—or foolish—enough to enter. Many adventurers have tried their luck, seeking treasure, power, or escape from their past… but few have ever returned.

You are a wandering traveler with nothing left to lose. After days of searching for shelter, you stumble upon this ancient hall. The air is cold, and the silence feels unnatural. As you step inside, the heavy stone doors slam shut behind you.)" << endl;
    cout << R"(In front of you are three doors. Each one is different, and each one holds a different fate.

Some say one door leads to unimaginable riches.
Others warn of a terrifying guardian that lurks behind another.
And one… may offer something far more unexpected.

There are no clues. No second chances.

Only one choice.)" << endl; 
    cout << "You see three doors in front of you. Which one do you choose? (1, 2, or 3): ";
    cin >> choice;

    if (choice == 1) {
        cout << "OH NO! You opened the door and the Chainsaw Man is behind it!" << endl;
        cout << "Chainsaw Man: 'You have entered my domain! Prepare to be shredded!'" << endl;

        cout << "You find a machete, a hammer, and a shotgun!" << endl;
        cout << "Which do you choose? ";
        
        string weapon;
        cin >> weapon;

        if (weapon == "machete") {
            cout << "You swing the machete, but he deflects it and injures you!" << endl;
        }
        else if (weapon == "hammer") {
            cout << "You swing the hammer, but he counterattacks and hits your chest!" << endl;
        }
        else if (weapon == "shotgun") {
            cout << "You shoot his leg, slowing him down and escape!" << endl;
        }
        else {
            cout << "Invalid weapon choice!" << endl;
        }

        cout << "You barely escape with your life!" << endl;
        cout << " Chainsaw Man: You got lucky this time, but I'll come find you, stranger!" << endl;
    }
    else if (choice == 2) {
        cout << "You opened the door and found a treasure chest!" << endl;
        cout << "Inside are gold coins and precious gems!" << endl;
        cout << "You are rich beyond your wildest dreams!" << endl;
        cout << "But you still need to be careful, as there may be traps!" << endl;
        cout << "You are in troll territory, so you need to be cautious!" << endl;
    }
    else if (choice == 3) {
        cout << "You found a safe place to rest." << endl;
        cout << "Friendly adventurers welcome you!" << endl;
        cout << "Villager Man: Hey there! You look like you could use something to eat. Would you like to follow me and my wife back to our home for a meal?" << endl;
        cout << "You: Yes, that would be great! Thank you!" << endl;
        cout << "You follow the villager and his wife back to their cozy home." << endl;
        cout << "They prepare a delicious meal for you. You eat roasted chicken, fresh vegetables, and warm bread." << endl;
        cout << "After the meal, you feel rejuvenated and ready for your next adventure!" << endl;
    }
    else {
        cout << "Invalid choice! Please choose 1–3." << endl;
    }

    cout << "Game Over!" << endl;

    cout << "Thanks for playing!" << endl;
    return 0;
}