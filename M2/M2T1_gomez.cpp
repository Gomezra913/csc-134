// CSC 134
// M2T1 - The apple orchard 
// 9/20/2026
// check out machine 

#include <iostream>
#include <iomanip> // For the 2 decimal places 
using namespace std;

 int main() {

    // set all veriables 
    string first_name, last_name, full_name ; // holds customer name 
    string product = "phone"; // changed 
    int amount_purchased; 
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

    // Ask how much they'd like to purchase
    cout << "how many " << product << " would you like today? ";
    cin >> amount_purchased;

    //calculate total price 
    total_cost = amount_purchased * cost_each; 

    // Formating: set all prices to 2 decimal places 
    cout << setprecision(2) << fixed;

    // Give the result 
    cout << "For" << amount_purchased << " " << product << endl; 
    cout << "That will be: $" << total_cost << endl; 
    cout << " Thank you for shopping with us!" << endl;  



    return 0; // no error 
  }