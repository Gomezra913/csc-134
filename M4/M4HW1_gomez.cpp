//Gomez.R
//M4HW1
//10-19

#include <iostream>

using namespace std;

int main() {
    int choice;

    
    cout << "Enter a number from 1 to 12? ";
    cin >> choice;

    
    while (choice < 1 || choice > 12) {
        cout << "Enter a number from 1 to 12? ";
        cin >> choice;
    }

    
    int i = 1;
    while (i <= 12) {
        cout << choice << " times " << i << " is " << (choice * i) << "." << endl;
        i++;
    }

    return 0;
}