// csc 134 
/*
M1H1 - Movie talk
Gomez, R
8/31/26
Example: Talk about spider-man 
*/ 

#include <iostream>
using namespace std;

// starting point 
int main() { 
     // purpose: practice using string, int , and double within natural text.
     // Decalre variables  
     string movie_name;     // Film title as in IMDM
     int    movie_year;     // year of release 
     double movie_grossm;   // almost a billion, internationally

     // Example: Spider man  
     movie_name = "Spider-man"; 
     movie_year = 2002; 
     movie_grossm = 825; // almost a billion, worldwide  
     
     // print the blurb 
     cout << "The movie " << movie_name << " came out in " << movie_year << "." << endl; 
    
     cout << "It grossed in total $" << movie_grossm << " million." << endl; 

     cout << "(at around 18 mins) After Parker wakes up the morning after getting bitten," << endl; 
     cout << "a boom mic is seen at the top of the mirror as he is looking at himself." << endl;
     
     // Print a movie qoute 
     cout << "QOUTE:" << endl << "\t\"with great power comes great responsibility\" " << endl; 

     return 0; // no errors 
}
