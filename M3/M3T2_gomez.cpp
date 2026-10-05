//csc 134 
// M3 random numbers example 
// Gomez. R 
// 10/4/2026

#include <iostream>
// for pesudo random number 
#include <cmath> 
// for truely making it random 
#include <ctime>
using namespace std;

int main() {
    cout << "lets roll some dice!" << endl;
    int seed = time(0); 
    //cout << "Your seed is: " << seed << endl; 
    //cout << "Whats you lucky number?";
    //cin >> seed; 

    srand (seed);
   
    const int MAX = 6; 
    int roll1, roll2, total;

    roll1 = (rand() % MAX) + 1;
    cout << "Your roll was: " << roll1 << endl;

    roll2 = (rand() % MAX) + 1;
    cout << "Your roll was: " << roll2 << endl;

    total = roll1 + roll2;

    cout << "Your total roll is:" << total << endl; 

    //crabs 
    if (total == 7){
        cout << "Lucky seven! you win " << endl;
     }
    else if (total == 2) {
        cout << "Snake eyes! Too bad, you lose." << endl; 
    }
    else if (total == 3){
        cout << "Sorry, three is unlucky, you lose." << endl;
    }
    else if (total == 12) {
        cout << "Boxcars! Sorry, you lost." << endl;
    }
    else { 
        cout << "Your point is " << total << " but we'll do that part later" << endl;
    }
    return 0;
}