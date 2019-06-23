#include <stdio.h>
#define TAXRATE .07
int main(void)
{
	float item, tax, total_cost, overall;
	int tires;

	printf("Enter the value of your item\n");
	scanf(" %f", &item);
	printf("Enter how many tires\n");
	scanf(" %d", &tires);
	tax = item * TAXRATE;
	total_cost = item + tax;
	overall = total_cost * tires;
  
	printf("Your item of $%.2f with sales tax is overall equals %.2f \n", item, overall);
 
	getchar();
	return 0;
}
