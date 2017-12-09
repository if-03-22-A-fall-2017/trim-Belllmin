/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.h
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Interface for trim
 * ----------------------------------------------------------
 */

#ifndef _TRIM_H
#define _TRIM_H
#define STRLEN 16

/*
    Makes a copy of a string and leaves leading and trailing blanks out.

    Parameters:
        	source 	The string to be trimmed.
        	trimmed_string 	Container which takes the trimmed version of source.
*/
void 	trim (const char *source, char *trimmed_string);

#endif
