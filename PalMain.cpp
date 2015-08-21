/* Assignment 2:  Palindrome Detection
   Main program --- version of 2 February 1999*/

#include <iostream.h>
#include <iomanip.h>
#include "PalSubs.h"

void main ( void )
{

   char LineIn[256];    // Input line from the user

   cout << "Enter lines to be evaluated as palindromes\n"
        << "Enter an empty line (just <ENTER>) to exit.\n\n";
   cout << "Line:  ";
   cin.getline (LineIn, 255);
   
   while (LineIn[0] != '\0') // I.e., not an empty line
   {
      cout << "Checking case-INsensitive:  ";
      
	  if (Palindrome(LineIn))
         cout << "TRUE, it is a palindrome." << endl;
      else
         cout << "FALSE, it is NOT a palindrome." << endl;

      cout << "Checking case-sensitive:   ";

      if (Palindrome(LineIn, TRUE))
         cout << "TRUE, it is a palindrome." << endl;
      else
         cout << "FALSE, it is NOT a palindrome." << endl;

      cout << "Line:  ";
      cin.getline (LineIn, 255);
   }

   cout << "Press Enter to continue. " << flush;
   cin.ignore(255, '\n');
}