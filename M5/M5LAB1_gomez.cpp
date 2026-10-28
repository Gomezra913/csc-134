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
void choice_back_door();
void choice_go_home();
// TODO: add your new prototypes here
void join_tour();
void too_weird();
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
// The player typed something that is not a number.
cin.clear(); // reset cin so it can read again
choice = 0; // treat it as an invalid choice
}
// Throw away the rest of the line the player typed.
cin.ignore(numeric_limits<streamsize>::max(), '\n');
if (1 == choice) {
choice_front_door();
} else if (2 == choice) {
// call choice 2 here
} else if (3 == choice) {
// call choice 3 here
} else if (4 == choice) {
cout << "Ok, quitting game" << endl;
return; // go back to main()
} else {
cout << "That's not a valid choice, please try again." << endl;
main_menu(); // try again
}
}
void choice_front_door() {
cout << "You give the password to the door man." << endl;
cout << "You enter a room full of people in robes and mask" << endl;
cout << "just like you were told to dress." << endl;
cout << "Do you:" << endl;
cout << "1. stay in the back of the room and obsever" << endl;
cout << "2. Give up and go home" << endl;
int choice = 0;
cout << "Choose: ";
cin >> choice;
if (1 == choice) {
choice_back_door();
} else if (2 == choice) {
choice_go_home();
}
}

void choice_back_door() {
cout << "You befrined someone" << endl; 
cout << "1. Join them on a tour of the party" << endl;
cout << "2. The party is to weird and decied to go home" << endl;


int choice;
cout << "choose:";
cin >> choice;

if (1 == choice) {
    join_tour();
}
else if (2 == choice){
    too_weird();
}
}
void join_tour(){
    cout << "You see things that you've never imagained, behind the mask you're frightend" << endl;

}

void too_weird(){
    cout << "you decide to go home, as you got to bed you find the mask you lefy behind" << endl;
}


