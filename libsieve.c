#include <math.h>
#include <stdio.h>

double sqrt(double );

void sieveofero(long size, long long *sieve_arr){ //should check out how to hanlde large numbers in C?
	long i = 0;
	long j = 0;
	for (i = 0; i < size;i++){
		sieve_arr[i] = 0;
	}
	for (i = 3; i < (long) sqrt(size)+2; i+=2){
		if (sieve_arr[i] == 0){
			for (j = i*i; j < size; j+=i ){	 //(i*i +  2*i)
				if (sieve_arr[j] == 0){
					sieve_arr[j] = 1;
				}
			}
				
		}
	}

}

