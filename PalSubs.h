/* Header file for the Palindrome project
   Enumeration and prototype
   Version of 2 February 1999*/

enum Flag { FALSE, TRUE };

/* Palindrome detection --- ignoring all but alphanumeric
   characters.  Test may be case sensitive or case insensitive,
   depending on an input parameter.

   Return a TRUE Flag if the character is a palindrome
   Otherwise FALSE

   Parameters:
   s[]        Character string to be examined
   Sensitive  Flag on whether to do a case-sensitive test
              If this is FALSE, then ignore differences
              based solely on upper-case versus lower-case.*/
Flag Palindrome (char s[], Flag Sensitive = FALSE);
