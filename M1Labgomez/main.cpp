// csc 134
// M1Lab - apple sales
// Gomez
// 8/26/26
// calculate apple prices.

#include <iostream>
using namespace std;

int main()
{
    // Introduce yourself
    string name = "Gomez";
    string product = "apple";

    cout << "Welcome to the " << name << " ";
    cout << product << " farm. " << endl;

    // do product price calculation
    int product_count = 100;
    double product_price = .25; // in USD

    cout << "We have " << product_count << " ";
    cout << product << "(s). They are $" << product_price;
    cout << " each. " << endl;

    double total_price = product_count * product_price;
    cout << "Total for all " << product_count;
    cout << " is: $ " << total_price << endl;

    return 0;
}
