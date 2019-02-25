#include <stdio.h>
#include <stdlib.h>
#include "libsieve.h"

void sieveofero(long, long*);

int main(int argc, char **argv){
	size_t n = atoi(argv[1]);
	if (argc != 2){
		return 1;
	}
	long *sieve_arr = malloc(sizeof(long)*n);
	sieveofero(n,sieve_arr);
	unsigned long i = 0;
	
	for (i = 1; i < n; i+=2){
		if (sieve_arr[i] == 0){
			if (i == 1){
				printf("2, "); 
			}
			else{
				printf("%ld, ",i);
			}
		}
	}
	printf("\n");
	
}
