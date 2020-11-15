all:count_bits

count_bits:  count_bits.o main.o
	gcc -ansi -Wall -pedantic count_bits.o main.o

count_bits.o: count_bits.c
	gcc -ansi -Wall -pedantic -c count_bits.c

main.o:	main.c count_bits.c
	gcc -ansi -Wall -pedantic -c main.c
