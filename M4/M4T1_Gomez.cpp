// csc 134
// 10/5/2026
// Gomez. R
// M4T1 loops 

#include <iostream> 
using namespace std;


int main(){
    int count = 1; 
    while (count <= 5){
        cout << "Hello #" << count << endl;
        count++;
    }

    const int MIN_NUM = 1;
    const int MAX_NUM = 10;

    cout << endl << "NUM     NUM Squared" << endl;
    cout << "---------------------" << endl;
    int i = MIN_NUM;
    while (i <= MAX_NUM) {
        cout << i << "\t " << i*i << endl;
        i++;
    }












}