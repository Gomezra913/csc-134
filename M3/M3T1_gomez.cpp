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
    // another way to do it:
    // cout << "enter "

    cout << "2nd retangle:" << endl; 
    cout << "\tlength ? "; 
    cin >> length2; 
    cout << "\twidth  ? "; 
    cin >> width2; 




    area1 = length1 * width2;
    area2 = length2 * width2;


    cout << "Rectangle 1 is area: " << area1 << endl;
    cout << "rectangle 2 is area: " << area2 << endl; 
















    return 0; 
}