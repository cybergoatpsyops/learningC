// Learning about saving sequential files in C
// File fscanfSeqFiles.c

/* The program opens the bookInfo.txt file, and adds a line to the end. */

#include <stdio.h>
#include <stdlib.h>
FILE * fptr;

int main()
{
	fptr = fopen("//home//xxkaliboyx//projects//c//abg//bookInfo.txt", "a");

	if (fptr == 0)
	{
		printf("Error opening the file! Sorry!\n");
		exit (1);
	}

	//Adds the line at the end
	fprintf(fptr, "\nMore books to come!\n");

	fclose(fptr); // Always close your files
	return(0);
}
