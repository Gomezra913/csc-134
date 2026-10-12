// CSC 134
// M3HW1 - Gold
// Gomez. R 
// 10/11/2026

#include <iostream>
using namespace std;
#include <string>
#include <iomanip>

int main() {


    

    cout << "question 3 " << endl;

    cout << "question 4 " << endl;



    cout << "question 1" << endl; 

    string talking;

    cout << " Hello I'm a c++ program" << endl;

    cout << "Do you like me? Please type yes or no." << endl;

    cin >> talking; 

    if (talking == "yes") {
        cout << "That’s great! I’m sure we’ll get along. " << endl;
    }
    else if (talking == "no") {
        cout << "Well, maybe you’ll learn to like me later." << endl;
    }
    else {
        cout << "If you’re not sure… that’s OK." << endl;
    }

    cout << endl; 

  
  
  
    
    cout << "Question 2" << endl;
    
    string meal_name = "Chicken sandwich";
    double meal_price; 
    double tax_rate = 0.08;
    double tax_amount;
    double tip_amount = 0.0; 
    double total;
    int orderType;

    
    cout << "Please enter the price of the meal: ";
    cin >> meal_price;

    cout << "Please enter 1 if the order is dine in, 2 if it is to go: ";
    cin >> orderType;

    
    tax_amount = meal_price * tax_rate;

    
    if (orderType == 1) {
        tip_amount = meal_price * 0.15;
    }

    total = meal_price + tax_amount + tip_amount; 

    
    string line = "---------------------------------";
    cout << line << endl;
    
    cout << setprecision(2) << fixed;
    
    cout << setw(20) << meal_name << setw(10) << meal_price << endl;
    cout << setw(20) << " tax " << setw(10) << tax_amount << endl;
    cout << setw(20) << " tip " << setw(10) << tip_amount << endl; // Added tip to receipt
    cout << line << endl;
    cout << setw(20) << "total: " << setw(10) << total << endl;
    
    cout << "Thank you come again" << endl << endl;

    




        
































    return 0;
}