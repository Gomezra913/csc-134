// csc 134 
/*
M1H1 - Movie talk
Gomez, R
8/31/26
Example: Talk about Sherk 
*/ 

#include <iostream>
using namespace std;

// starting point 
int main() { 
     // purpose: practice using string, int , and double within natural text.
     // Decalre variables  
     string movie_name; 
     int    movie_year;     // year of release 
     double movie_grossm;   // about half a billion, internationally

     // Example: sherk 
     movie_name = "sherk"; 
     movie_year = 2001; 
     movie_grossm = 484.4; // about half a billion, internationally 
     
     // print the blurb 
     cout << "The movie " << " came out in " << movie_year << "." << endl; 
    
     cout << "It grossed in total $" << movie_grossm << "million." << endl; 
     
     // Print a movie qoute 
     cout << "QOUTE:" << endl << "\t\"ogers are like onions. Onions have layers. Ogers have layers.\" " << endl; 

     return 0; // no errors 
}