#include <stdio.h>

/* count_bits will get long int Dec number and count the active bits in it */ 
int count_bits(long int num) {

	int bits_in_num = 0;
	int tmp;	/* counter for bits, and temp var for checking */
	
	while (num != 0){	/* while we go trough the number bits */
		if (num < 0){
			num *= -1;	/* if it is a negative number */
			bits_in_num++;/* change to positive and add one count */
		}
		tmp = num%2;  /* the leftover will tell the status of the bit */
		if (tmp == 1)	/* if tmp equal 1 then the bit is active */
			bits_in_num++; 
		num /= 2;	/*advance to the next bit..*/
	}
	return bits_in_num;
}				/* return the final count */

