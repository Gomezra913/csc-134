// CSC 134
// M2T1 - The apple orchard 
// 9/20/2026
// check out machine 

#include <iostream>
using namespace std;

 int main() {

    // set all veriables 
    string first_name, last_name, full_name ; // holds customer name 
    string product = "phone"; // changed 
    double cost_each = 0.99; 
    double total_cost; 

    // Greet costumer 
    cout << "welcome to our " << product << " store!" << endl; 
    cout << "whats your first name? "; 
    cin >> first_name; 
    cout << "what's your last name? ";
    cin >> last_name; 
    full_name = first_name + " " + last_name; 
    cout << "Nice to meet you, " << full_name << endl; 












    return 0; // no error 
  }