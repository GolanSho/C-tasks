# include <stdio.h>

/* count odd bits will get a positive number and calculate how many odd bits thare are. */
int count_odd_bits(unsigned int short num){

	int tmp;
	int counter = 0;	/* vars for checking active bits(tmp), */ 
	int odd_bits = 0;	/* checking the position of the bit(counter)*/
				/* and counter for the odd bits(odd_bits) */
	while (num != 0){
		tmp = num%2;	/* check if bit is active */
		if (tmp == 1 && counter%2 != 0){
			odd_bits++;	/* if active and on odd pos count +1 */
		}
		counter++;
		num /= 2;	/* advance in the pos and get the next bit */
	}
	return odd_bits;	/* return final count of odd bits. */
}
