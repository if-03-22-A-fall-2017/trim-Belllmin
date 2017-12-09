/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "trim.h"

/*
    Makes a copy of a string and leaves leading and trailing blanks out.

    Parameters:
        	source 	The string to be trimmed.
        	trimmed_string 	Container which takes the trimmed version of source.
*/
void trim(const char *source, char *trimmed_string)
{
  if(strlen(source) == 0) strcpy(trimmed_string, source);
  strcpy(trimmed_string, source);
  int length = strlen(source);

  for(int i = 0; i < length; i++)
  {
    if(source[i] == ' ' && source[i + 1] == ' ') trimmed_string[i] = '\0';
  }

  for(int i = 0; i < length; i++)
  {
    if(source[0] == ' ') trimmed_string[i] = source[i + 1]; // First Index
    if(trimmed_string[length - 1] == ' ') trimmed_string[length - 2] = '\0'; // Last Index
  }
}
