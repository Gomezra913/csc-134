#include <iostream>
using namespace std;

void greet(); 
void speak (string message); 

int num_add(int num); 
int num_double(int num);

int main()
{
    cout << " void Function Example" << endl; 
    greet();
    speak ("Hello world");
    speak ("Another message");
    int number;
    cout << " enter an interger: ";
    cin >> number;
    int answer = num_add (number); 
    cout << "num_add(" << number << ") returns:" << answer << endl;

    answer = num_double(number);
    cout << " num_double (" << number <<") return: " << answer << endl;

    return 0;
}

void greet() {
    cout << "what's up" << endl;
}
void speak (string message) {
    cout << message << endl;
}

int num_double(int num) {

    num = num + 1;
    return num; 

}
int num_add(int num) {

    num *= 2;
    return num;

}