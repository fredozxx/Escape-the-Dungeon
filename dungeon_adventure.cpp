#include <iostream>
#include <string>

using namespace std;

void introduction() {
    cout << "================ Escape the Dungeon ================\n";
    cout << "You find yourself trapped in a dark dungeon. Your mission is to find a way out.\n";
    cout << "Choose your path wisely, as danger lurks in every corner...\n";
    cout << "===================================================\n\n";
}

int main() {
    introduction();
    int choice;
    string item;

    // First Decision
    cout << "You see two paths ahead:\n";
    cout << "1. Take the dark tunnel\n";
    cout << "2. Climb the steep staircase\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "You stumble upon a treasure chest. Inside, you find a sword.\n";
        item = "sword";
    } else if (choice == 2) {
        cout << "You find an old shield resting against the wall.\n";
        item = "shield";
    } else {
        cout << "Invalid choice. You stand frozen in the darkness. Game over.\n";
        return 0;
    }

    // Second Decision - Encounter with a Monster
    cout << "\nAs you move forward, a monster appears!\n";
    cout << "What will you do?\n";
    cout << "1. Fight\n";
    cout << "2. Run\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    switch (choice) {
        case 1:
            if (item == "sword") {
                cout << "You slash the monster with your sword. You win!\n";
            } else if (item == "shield") {
                cout << "You block the monster's attack and manage to escape. You survive!\n";
            } else {
                cout << "You have nothing to defend yourself. The monster overpowers you. Game over.\n";
            }
            break;
        case 2:
            cout << "You run back to the dungeon entrance, but the monster catches you. Game over.\n";
            break;
        default:
            cout << "Invalid choice. The monster attacks while you hesitate. Game over.\n";
            break;
    }

    cout << "\nThanks for playing!\n";
    return 0;
}
