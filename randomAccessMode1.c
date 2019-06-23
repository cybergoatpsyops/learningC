// Example program of random access files
// File randomAccessMode1.c

/* The program opens the file letters.txt
 * and changes one of the letters to an *. It then prints the new
 * list with the altered list of letters.*/

#include <stdio.h>
#include <stdlib.h>
FILE * fptr;

int main()
{
	char letter;
	int i;

	fptr = fopen("//home//xxkaliboyx//projects//c//abg//letters.txt", "r+");

	if (fptr == 0)
	{
		printf("There was an error while opening the file.\n");
		exit(1);
	}

	printf("Which # letter would you like to change (1-26)? \n");
	scanf(" %d", &i);

	// Seeks that position from the beginning of the file
	fseek(fptr, (i-1), SEEK_SET);	// Subtract 1 from the postition
					// because array starts at 0

	// Write an * over the letter in that position
	fputc('*', fptr);

	// Now jump back to the beginning of the array and print it out
	fseek(fptr, 0, SEEK_SET);
	printf("Here is the file now:\n");
	for (i = 0; i < 26; i++)
	{
		letter = fgetc(fptr);
		printf("The next letter is %c.\n", letter);
	}

	fclose(fptr); // Again, always close your files
	return(0);
}

