// Ricardo. G
// csc 134 

#include <iostream> 
using namespace std; 

void choosehole1();
void choosehole2(); 

int main() {
    int choice; 

    cout << "DO you choose hole 1 or hole 2?" << endl;
    cout << "1. choose hole #1" << endl;
    cout << "2. choose hole #2" << endl;
    cin >> choice; 

    if (1 == choice){
      choosehole1 ();
    } 
    else if (2 == choice){ 
        choosehole2();
    }
    else{
        cout << "I'm sorry, that is not a vaild choice." << endl; 
    }

    cout << "Do you jump in or reach your hand in?" << endl;
    cout << "1. jump in #1" << endl; 
    cout << "2. Reach in #2" << endl;
    cin >> choice;

    if (1 == choice){
      choosehole1 ();
    } 
    else if (2 == choice){ 
        choosehole2();
    }
    else{
        cout << "I'm sorry, that is not a vaild choice." << endl; 
    }

    cout << "Thank you for playing!" << endl;
    return 0; 

}


void choosehole1(){

cout << " You fell into the foutain of enternal youth " << endl; 
//cout << "You win...... A new car!" << endl;
//cout << "1. hop in the car and drive" << endl;
//cout << "2. Donate the car to charity" << endl;

}

void choosehole2(){

    cout << "You get eaten by the the audience" << endl; 
    //cout << " You win....... a bottle of floor wax." << endl;
}