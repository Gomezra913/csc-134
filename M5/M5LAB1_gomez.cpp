/*
Gomez.R
csc 134 
10/28/26
choose your owm adventure 
*/

#include <iostream>
#include <limits>
using namespace std;

void main_menu();
void choice_front_door();

// TODO: add your new prototypes here

void choice_front_door();
void choice_go_home();
void main_menu();
void get_kidnapped();
void choice_back_door();
void think_about();
void normal_life();


int main() {
cout << "M5LAB1 - Choose Your Own Adventure" << endl;
// Start the story.
main_menu();
// When main_menu() returns, the story is over.
cout << "Thanks for playing!" << endl;
return 0; // finished with no errors
}
// FUNCTION DEFINITIONS
// The full code for each function goes here, below main().
void main_menu() {
// A menu that accepts 1, 2, 3, or 4 (quit).
cout << "Main Menu" << endl;
cout << "You get invited by a friend to go to a " << endl;
cout << "mistouirs party that requires a password a mask to enter" << endl;
cout << "Do you:" << endl;
cout << "1. Enter the manision " << endl;
cout << "2. Sneak around back" << endl;
cout << "3. Forget it, and go home" << endl;
cout << "4. [Quit]" << endl;
cout << "Choose: ";

int choice = 0;
cin >> choice;
if (cin.fail()) {

cin.clear(); 
choice = 0; 
}
// Throw away the rest of the line the player typed.
cin.ignore(numeric_limits<streamsize>::max(), '\n');

if (1 == choice) {
choice_front_door();
} 

else if (2 == choice) {
choice_back_door();
} 

else if (3 == choice) {
choice_go_home();
} 

else if (4 == choice) {
cout << "Ok, quitting game" << endl;
return; // go back to main()
} 

else {
cout << "That's not a valid choice, please try again." << endl;
main_menu(); 
}

}
void choice_go_home(){
    cout <<" You got lucky, YOU got to live a normal life" << endl;
    cout << "1. Are you thinking about going back " << endl;
    cout << "2. You never think about it again" << endl;
    cout << "3. Quit" << endl;

    int choice; 

cin >> choice;

if (choice == 1) {
think_about(); 
}
else if (2 == choice) {
normal_life();
} 
else if (3 == choice) {
cout << "Ok, quitting game" << endl;
return; 
} 

else {
cout << "That's not a valid choice, please try again." << endl;
main_menu(); 
}
}                                             


void think_about() {
    cout << "You loss everything trying to go back" << endl;
}

void choice_front_door() {
cout << "You give the password to the door man." << endl;
cout << "You enter a room full of people in robes and mask" << endl;
cout << "just like you were told to dress." << endl;
cout << "Do you:" << endl;
cout << "1. stay in the back of the room and obsever" << endl;
cout << "2. Give up and go home" << endl;
cout << "3. Quit" << endl;


int choice; 

cin >> choice;
if (choice == 1) {
        cout << " You stay in the back and watch " << endl;
        
        
        cout << "Do you:" << endl;
        cout << "1. Follow the hooded figure" << endl;
        cout << "2. Try to slip out" << endl;
        cout << "3. Quit" << endl;

        int choice2;
        cin >> choice2;

        if (choice2 == 1) {
            cout << "You get kidnapped and never get seen again." << endl;
        } else if (choice2 == 2) {
            cout << "You safely slip away and go home." << endl;
        } else if (choice2 == 3) {
            cout << "Ok, quitting game" << endl;
            return; // Quits out of the function
        } else {
            cout << "That's not a valid choice!" << endl;
        }
    } 
    else if (choice == 2) {
        cout << "You find the mask you left behind on your bed now." << endl;
    }
    else if (choice == 3) {
        cout << "Ok, quitting game" << endl;
        return; 
    }
    else {
        cout << "thats not a valid choice, try again" << endl;
    }
}

