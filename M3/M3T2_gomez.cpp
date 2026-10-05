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
    cout << "Your seed is: " << seed << endl; 
    //cout << "Whats you lucky number?";
    //cin >> seed; 

    srand (seed);
   
    const int MAX = 6; 
    int roll = 

    roll = (rand() % MAX) + 1;
    cout << "Your roll was: " << roll << endl;

    roll = (rand() % MAX) + 1;
    cout << "Your roll was: " << roll << endl;

    roll = (rand() % MAX) + 1;
    cout << "Your roll was: " << roll << endl;

    
    return 0;
}