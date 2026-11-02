/*
Gomez.R
csc-134
11/2/26
M5 Lab2
*/

#include <iostream>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.
/************ */
double getLength();
double getWidth();
double getArea(double Length, double Width);
void displayData(double Length ,double Width, double Area);

int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double Length,    // The rectangle's length
          Width,     // The rectangle's width
          Area;      // The rectangle's area
          
   // Get the rectangle's length.
   Length = getLength();
   
   // Get the rectangle's width.
   Width = getWidth();
   
   // Get the rectangle's area.
   Area = getArea(Length, Width);

   
   
   // Display the rectangle's data.
   displayData(Length, Width, Area);

          
   return 0; //TODO fix this 
}
//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//*********
double getLength(){
    double l;
    cout << "Enter the rectangles length" << endl;
    cin >> l;
    return l;
}

double getWidth(){
    double W;
    cout << "Enter the rectangles width" << endl;
    cin >> W;
    return W;
}

double getArea(double Length, double Width){
    return Length * Width;
}

void displayData(double Length ,double Width, double Area){
    cout << "retangle details" << endl;
    cout << "Length:" << Length << endl;
    cout << "Width:" << Width << endl;
    cout << "Area:" << Area << endl;
}