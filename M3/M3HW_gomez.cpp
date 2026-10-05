// csc 134
// 10/5/2026
// Gomez. R
// examples 

#include <iostream> 
using namespace std;


int main(){
    // infinite loop, or never starts?
    bool done = true;
    while(done = false){
        cout << "still going ......";
    }
    int count = 1; 
    while (count < 6){
    cout << "count is: " << count << endl;
    count++; // increment AFTER showing the number
    }

    bool is_valid = false;
    int number;
    while (false == is_valid) {
        cout << "Enter a number from 1-5: ";
        cin >> number;
        if(number < 1) {
            cout << "Too low!" << endl;
        }
        else if (number > 5) {
            cout << "Too high!"<< endl; 
        }
        else {
            cout << " You entered: " << number << endl;
            is_valid = true; // we're done, stops next loop
        }
    
        
    }

    return 0;
}