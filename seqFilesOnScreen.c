// Example prog of how to save a sequential file and prints it on screen
// File seqFilesOnScreen.c

/* The program takes the book info from bookInfo.txt; also
 * reads each line from the file and outputs it to the
 * screen. */

#include <stdio.h>
#include <stdlib.h>
FILE * fptr;

int main()
{
	char fileLine[100]; // Will hold each line of input
	fptr = fopen("//home//xxkaliboyx//projects//c//abg//bookInfo.txt","r");

	if (fptr != 0)
	{
		while (!feof(fptr))
		{
			fgets(fileLine, 100, fptr);
			if (!feof(fptr))
			{
				puts(fileLine);
			}
		}
	}
	else
	{
		printf("\nError opening file.\n");
	}
	fclose(fptr); // Always close your files
	return(0);
}
