// csc 134 
// 10/4/2026
// Gomez. R 
// Number grade to letter grade Conversion 

#include <iostream>

using namespace std;

int main() {
    
    int grade;
    // enter your number grade 
    cout << "Enter your number grade: ";
    cin >> grade;
    
    // 90 - 100 = A
    if (grade >= 90 && grade <= 100) {
        cout << "Your letter grade is: A" << endl;
    } 
    // 80-89 = B
    else if (grade >= 80 && grade <= 89) {
        cout << "Your letter grade is: B" << endl;
    } 
    // 70-79 = C
    else if (grade >= 70 && grade <= 79) {
        cout << "Your letter grade is: C" << endl;
    } 
    //60 - 69 = D
    else if (grade >= 60 && grade <= 69) {
        cout << "Your letter grade is: D" << endl;
    } 
    // 0 - 59 = F
    else if (grade >= 0 && grade <= 59) {
        cout << "Your letter grade is: F" << endl;
    } 
    else {
        // only number 0-100 are valid 
        cout << "Invalid number. Please enter a grade between 0 and 100." << endl;
    }

    return 0;
}