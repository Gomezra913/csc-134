// csc 134 
// Gomez.R
// 10/12/2026
// Draw boxes

#include <iostream>
using namespace std;

int main(){
    string token = "❤️"; 
    int width = 0;
    int height = 0;
    while ( width <= 0 || height <= 0){

    cout << "enter retangle width: ";
    cin >> width;
    cout << "enter retangle height: ";
    cin >> height; 

    if (width <=0) {
        cout << "width cannot be zero or negative." << endl; 
    }
    if (height <=0){
        cout << "width cannot be zero or negative." << endl;
    }
 }

    for (int i = 0; i < width; i++ ){
        cout << token << " ";
    }
    cout << endl; 

    for (int j = 0; j < height; j++){
        cout << token << endl;
    }
    cout << endl;
    
    cout << "Part 2 " << endl;

    for(int j = 0; j < height; j++){
        cout << token << endl;
    }

    cout << " Here is your retangle " << width << " by " << height << endl;

    for (int j =0; j < height; j++){

        for (int i = 0; i < width; i++){
            cout << token << " ";
        }
        cout << endl; 
    }


}