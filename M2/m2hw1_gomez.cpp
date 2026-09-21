/*
CSC 134 
M2HW1 - 4 questions  
Gomez. R 
9/16/26
*/


#include <iostream>
# include <iomanip> 
using namespace std; 



void question1();
void question2();
void question3();
void question4();



int main() {
cout << " Bank Transaction" << endl;
question1();

cout << " Solid snake crates inc. " << endl;
question2();

cout << " Pizza party slice calculator " << endl;
question3(); 

cout << "Cheering " << endl;
question4(); 

    return 0;
}

void question1(){

    string transfer_name;
    double transfer_amount;
    double bank_fee;
    double bank_amount;
    double withdraw_amount;
    double total;
    
    transfer_name = "Account number 9800";
    transfer_amount = 10000.00;
    withdraw_amount = 1500.00;
    bank_fee = 0.50;

    bank_amount = transfer_amount - bank_fee;
    total       = transfer_amount + bank_amount - withdraw_amount;


    cout << "Acount holder: John Smith " << endl;

    string line = "---------------------------";
    cout << line << endl; 

    cout << setprecision (2) << fixed; 
    cout << setw(20) << transfer_name << endl;
    cout << setw(5) << "  deposit "  << setw(10) << transfer_amount << endl;
    cout << setw(10) << " withdraw "  << setw(10) << withdraw_amount << endl; 
    cout << setw(10) << " fee " << setw(10) << bank_fee << endl;
    cout << line << endl;
    cout << setw(10) << "total: " << setw(10) << total << endl; 
    cout << "Thank you for Trusting our bank " << endl << endl;

}

void question2(){

    const double COST_PER_CUBIC_FOOT = 0.30;   
    const double CHARGE_PER_CUBIC_FOOT = 0.52; 


    double length, width, height; 
    double volume;
    double crate_cost;
    double crate_charge;
    double profit;

    cout << "Please enter the crate dimesions." << endl; 
    cout << "crate length: ";
    cin  >> length; 
    cout << "create width: ";
    cin  >> width;
    cout << "crate height: ";
    cin  >> height;

    volume = length * width * height;

    crate_cost = COST_PER_CUBIC_FOOT * volume;
    crate_charge = CHARGE_PER_CUBIC_FOOT * volume;

    profit = crate_charge - crate_cost; 

    cout << setprecision(2) << fixed; 
    cout << " A crate measuring " << length << " x " << width << " x " << height << " ft. " << endl;
    cout << "It's volume: " << volume << " cubic ft." << endl; 
    cout << endl; 
    cout << "cost to build: $" << crate_cost << endl;
    cout << "sells for:     $" << crate_charge << endl;
    cout << "Profit:        $" << profit << endl; 

}

void question3() {

    const int SLICES_PER_PERSON = 3;

    int Pizzas;
    int slicesPerPizza;
    int visitors; 
    int total; 
    int slicesEaten;
    int leftOverSlices;

    cout << " Enter how many pizzas there are. " << endl; 
    cout << " Pizzas: ";
    cin >>   Pizzas;
    cout << " how many visitors are there. " << endl;
    cout << " visitors ";
    cin >>   visitors;
    cout << " SlicesPerPizza ";
    cin >>  slicesPerPizza;
    
    total = Pizzas * slicesPerPizza;
    slicesEaten = visitors * 3;
    leftOverSlices = total - slicesEaten;

    cout << setprecision(2) << fixed; 
    cout << "There will be " << leftOverSlices << " leftover slices." << endl;




}

void question4(){

    string letsGo, school, team, cheerOne, cheerTwo;

    letsGO = "Let's go ";
    school = "FTCC";
    team = "Trojans";

    cheerOne = letsGo + school;
    cheerTwo = letsGo + team;
    
    cout << cheerOne 





}













