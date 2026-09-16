// csc 134
// M2T1 - receipt
// Gomez.r 
// 9/14/26
// Build a receipt 

#include <iostream> 
using namespace std;

    int main() {

        // DECLARE VARIABLES 
        double meal_price;  //$
        double tax_rate;    // Percent 
        double tax_amount;  //$
        double total;       //$, meal + tax

        // INPUT 
        // Right now, nothing. They pick exactly one sandwitch. 
        // For now, hard code some value 
        meal_name = "Chicken sandwitch"
        meal_price = 5.99;
        tax_rate   = 0.08

        // PROCESSING 
        tax_amount = meal_price * tax_rate;
        total      = meal_price + tax_amount;

        //output 
        // todo: Print like a receipt 
        string line = "---------------------------------"
        cout << line << endl;
        cout << meal_name << " " << meal_price << endl; 
        cout << " tax " << " " << tax_amount << end; 
        cout << line << endl; 
        cout << "total: " << total << endl; 
        cout << "Thank you come again" << endl << endl;


        return 0; // no errors 
    }