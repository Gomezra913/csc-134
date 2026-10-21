/* csc 134
 Gomez.R 
 M5T2
 with a partner (gemini_luna6)
*/

#include <iostream>
using namespace std;

// Prototype Declare function here, define them under main.
int square(int num);
void printAnswerLine(int number, int squared); 

int main(){
    cout << "Table of the square program" << endl;

    for (int i= 1; i <= 10; ++i){
        int squared = square(i);
        printAnswerLine(i, squared);
    }
}

// Define function here.

int square (int num){
    // Does the math -- input, an interger, output, that interger squared 

    return num * num;//TODO
}

void printAnswerLine(int number, int squared){
    // Print one line od the squares.
    // example output:
    //3           9
    cout << number << " sqaured is " << squared << endl;
    
}
