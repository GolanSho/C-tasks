#include <stdio.h>
#include <limits.h>
#include "count_bits.h"

/* main will ask for a Dec number within the long int range
   and return the active bits for that number */
int main() {
	long int num;
	int result;

	printf("Please enter a Decimal number: \n");
	printf("The number should be within: %ld to %ld. \n", LONG_MIN, LONG_MAX);
	scanf("%ld", &num);
	result = count_bits(num);  /* call count_bits the get the active bits */
	printf("For the Number: %ld, there are %d bits\n", num, result);
	return 0;
}
