/*
Gomez.R 
csc-134
11/9/2026
basic arrays 
*/

#include <iostream> 
using namespace std;

void method1();
void method2();
void method3();

int main() {

    method1();
    method2();
    method3();

    return 0;
}

void method1() {
    string item = "money";
    cout << "count how many " << item << " were seen each day." << endl;

    const int SIZE = 5;
    int counts [SIZE];
    double average = 0;
    int total = 0;
    for (int i=0; i < SIZE; i++) {
        cout << "Day " << i+1 << ": ";
        cin >> counts [i];
        total += counts[i];
    }
    cout << " Total " << item << " seen: " << total << endl;
    average = (double) total / SIZE;
    cout << "average per day: " << average << endl;
}

void method2() {
    string item = "money";
    cout << " count how many " << item << " were seen each day " << endl;
    
    const int SIZE = 5;
    int total = 0;
    int today;
    double average = 0;

    for (int i=0; i < SIZE; i++) {
        cout << "Day " << i+1 << ": ";
        cin >> today;
        total += today;
        
        
    }
    cout << "total " << item << "seen: " << total << endl;
    average = (double) total / SIZE;
    cout << "Average per day: " << average << endl;
}

void method3() {
    const int SIZE = 5;
    int counts[SIZE] = {0, 0, 0, 0, 0};
    cout << " count money per day" << endl;
    for (int count: counts) {
        cout << "> ";
        cin >> count;
    }

    int total = 0;
    double average = 0;
    for (int count: counts) {
        total += count;
    }
    average = (double) total / SIZE;
    cout << "total: " << total << endl << "Average: " << average << endl;
}