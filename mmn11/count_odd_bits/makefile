all:count_odd_bits

count_odd_bits: count_odd_bits.o main.o
	gcc -ansi -Wall -pedantic count_odd_bits.o main.o

count_odd_bits.o: count_odd_bits.c
	gcc -ansi -Wall -pedantic -c count_odd_bits.c

main.o: main.c count_odd_bits.c
	gcc -ansi -Wall -pedantic -c main.c
