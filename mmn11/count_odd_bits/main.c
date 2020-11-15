# include <stdio.h>
# include <limits.h>
# include "count_odd_bits.h"

/* main will ask for a positive numbers and send it to count_odd_bits. */
/* number should be in the unsigned short int range */
int main(){
	
	unsigned short int num;	   /* the number to send to count odd bits*/
	int result;

	printf("Enter some Decimal numbers: \n");
	printf("Thay should be within 0 to %d \n", SHRT_MAX);
	
	while (scanf("%hu", &num) != EOF){	/* to end the input press Ctrl+D in linux */
		result = count_odd_bits(num);	/* send the input to count_odd_bits */
		printf("\n");			/* and print the odd bits for each number */
		printf("For the number %d, there are %d odd bits. \n", num, result);
	}
	return 0;
}
