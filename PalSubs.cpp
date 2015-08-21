/* Subprogram implementation file for the Palindrome project
   Author: Bryan Wood
   Version of palsub.cpp */

#include <ctype.h> // for string manips
#include <string.h>// for string manips
#include "PalSubs.h"

/* Other include file you feel appropriate
   Any function you deem appropriate
   Palindrome detection --- ignoring all but alphanumeric
   characters.  Test may be case sensitive or case insensitive,
   depending on an input parameter.
   Return a TRUE Flag if the character is a palindrome
   Otherwise FALSE

   Parameters:
   s[]        Character string to be examined
   Sensitive  Flag on whether to do a case-sensitive test
              If this is FALSE, then ignore differences
              based solely on upper-case versus lower-case.*/

Flag Palindrome (char s[], Flag Sensitive)
{
	char
		temp1[256],
		temp2[256];
	int
		l = 0, // down counter
		p = 0, // up counter
		x = 0; // loop control

	//remove all non alpha chars
	l = strlen (s);
	strcpy (temp1, s);
	for (x = 0; x < l + 1; x++)
	{
		if (isalpha (temp1[x]))
		{
			temp2[p++] = temp1[x];
		}
	}
    temp2[p] = '\0';

	//copy and reverse the string
	strcpy (temp1, temp2);

	//reverse string compare
	l = strlen (temp2);
	p = 0;
	for (x = l - 1; x > -1; x--)
	{
		temp1[p++] = temp2[x];
	}
	
	//check for sensitivity of case
	if (Sensitive == FALSE) // RUNS FIRST
	{
		if (strcmp (temp1, temp2) == 0)
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		}
	}
	if (Sensitive == TRUE)
	{
		p = 0;
		for (x = l - 1; x > -1; x--)
		{
			temp1[p] = tolower (temp1[p]);
			temp2[p] = tolower (temp2[p]);
			p++;
		}
		if (strcmp (temp1, temp2) == 0)
		{
			return TRUE;
			}
		else
		{
			return FALSE;
		}
	}

	return FALSE;
}
