// csc 134
// M2T1 - receipt
// Gomez.r
// 9/14/26
// Build a receipt


#include <iostream>
// iomanip lets you use setw
#include <iomanip>
using namespace std;


    int main() {


        // DECLARE VARIABLES
        string meal_name;
        double meal_price;  //$
        double tax_rate;    // Percent
        double tax_amount;  //$
        double total;       //$, meal + tax


        // INPUT
        // Right now, nothing. They pick exactly one sandwitch.
        // For now, hard code some value
        meal_name = "Chicken sandwitch";
        meal_price = 5.99;
        tax_rate   = 0.08;


        // PROCESSING
        tax_amount = meal_price * tax_rate;
        total      = meal_price + tax_amount;


        //output
        // todo: Print like a receipt
        string line = "---------------------------------";
        cout << line << endl;
        // coulum
        cout << setprecision (2) << fixed;
   
        cout << setw(20) << meal_name << setw(10) << meal_price << endl;
        cout << setw(20) << " tax " << setw(10) << tax_amount << endl;
        cout << line << endl;
        cout << setw(20) << "total: " << setw(10) << total << endl;
        cout << "Thank you come again" << endl << endl;




        return 0; // no errors
    }
