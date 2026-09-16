#include <iostream>
#include <iomanip>
using namespace std;

int main() { 

     // Declare constants and variables 
    const double COST_PER_CUBIC_FOOT = 0.23;   // (Material & fabrication cost per cu ft)
    const double CHARGE_PER_CUBIC_FOOT = 0.50; // (Billed invoice amount per cu ft)


    double length, width, height; 
    double volume;
    double crate_cost;
    double crate_charge;
    double profit;



    cout << "Please enter the crate dimesions." << endl; 
    cout << "crate length: ";
    cin  >> length; 
    cout << "create width:  ";
    cin  >> width;
    cout << "crate height: ";
    cin  >> height;


    volume = length = width = height;

      // Calculate price and cost 
    crate_cost = COST_PER_CUBIC_FOOT * volume;
    crate_charge = CHARGE_PER_CUBIC_FOOT * volume;


      //calculate profit 
    profit = crate_charge - crate_cost; 


    cout << setprecision(2) << fixed; 
    cout << " A crate measuring " << length << " x " << width << " x " << height << " ft. " << endl;
    cout << "Is volume: " << volume << " cubic ft." << endl; 
    cout << endl; 
    cout << "cost to build: $" << crate_cost << endl;
    cout << "sells for:     $" << crate_charge << endl;
    cout << "Profit:        $" << profit << endl; 

 return 0; // no errors 
}