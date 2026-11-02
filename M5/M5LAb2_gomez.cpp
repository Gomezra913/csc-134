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
double getArea();
void displayData(double Length ,double width, double area){
    cout << "data" << endl;
}

int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea();

   
   
   // Display the rectangle's data.
   displayData(length, width, area);

          
   return 0; //TODO fix this 
}
//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//*********