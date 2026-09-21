// csc 134 
// M3T1 - compareing area 
// 
//
#include <iostream> 
using namespace std;
int main() {
    // declare variables for each rectangles 
    double length1, width1, area1;
    double length2, width2, area2;

    // Input: ask for the width and legth of both 

    cout << "First rectangle:" << endl; 
    cout << "\tlength ? "; 
    cin >> length1; 
    cout << "\twidth  ? ";
    cin >> width1; 

    cout << "2nd retangle:" << endl; 
    cout << "\tlength ? "; 
    cin >> length2; 
    cout << "\twidth  ? "; 
    cin >> width2; 

    // another way to do it:
    // cout << "enter rectangle 1's diensions, put a space between the." << endl; 
    //cin >> length1 >> width1; 

    // Calculation: find area of both
    area1 = length1 * width2;
    area2 = length2 * width2;

    // output: print the areas 
    cout << "Rectangle 1 is area: " << area1 << endl;
    cout << "rectangle 2 is area: " << area2 << endl; 
    //TODO: Tell the user which one is larger (more area)
    // if statement test for true or false 
    if (area1 > area2) {
        cout << "Reactangle 1 is larger." << endl;
    }
    else if (area2 > area1) { 
        cout << "Rectangle 2 is larger." << endl;
    }
    else {
        cout << "They are the same size." << endl;
    }



    return 0; 
}