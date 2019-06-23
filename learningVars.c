// Example program about local and global variables
// File learningVars.c

/* The program is a simple demonstration of the difference between
 * global variables and local variables. */

#include <stdio.h>
int g1 = 10;

int main()
{
	float l1;
	l1 = 9.0;

	printf("%d %.2f\n", g1, l1);	// prints the 1st global and first
					// local variable
	prAgain(); //calls our first function
	return 0;
}

float g2 = 19.0;

int prAgain()
{
	int l2;
	l2 = 5;

	// Can't print 11--it is local to main
	printf("%d %.2f %d\n", l2, g2, g1);
	return 0;
}
