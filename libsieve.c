#include <math.h>
#include <stdio.h>

double sqrt(double );

//the array returned contains prime number slots in the uneven indexed values only
void sieveofero(long size, long long *sieve_arr){ //should check out how to hanlde large numbers in C?
	//this function expects an allocated array
	long i = 0;
	long j = 0;
	//initialize array with all numbers marked as false
	for (i = 0; i < size;i++){
		sieve_arr[i] = 0;
	}
	//printf("[_] %d \n", (int) sqrt(size));
	for (i = 3; i < (long) sqrt(size)+2; i+=2){
		//printf("[->] %d\n",i);
		if (sieve_arr[i] == 0){
			for (j = i*i; j < size; j+=i ){	 //(i*i +  2*i)
				//printf("[--->] %d %d\n",i,j);
				//if (j < size){
				if (sieve_arr[j] == 0){
					sieve_arr[j] = 1;
				}
				//}
			}
				
		}
	}

}

void sieveofatkin(long size, long long *sieve_arr){ //should check out how to hanlde large numbers in C?
	//this function expects an allocated array
	long i = 0;
	long j = 0;
	//initialize array with all numbers marked as false
	for (i = 1; i < size;i++){
		sieve_arr[i] = 0;
	}
	//printf("[_] %d \n", (int) sqrt(size));
	for (i = 2; i < (int) sqrt(size); i++){
		//printf("[->] %d\n",i);
		if (sieve_arr[i] == 0){
			for (j = i*i; j < size; j +=(i*i +  2*i) ){	
				//printf("[--->] %d %d\n",i,j);
				//if (j < size){
				if (sieve_arr[j] == 0){
					sieve_arr[j] = 1;
				}
				//}
			}
				
		}
	}

}


/*
	for (i = 2; i < (int) sqrt(n); i++){
		//printf("[->] %d\n",i);
		for (j = i*i; j < n; j +=2*i){	
			if (sieve[j] == 0){
				sieve[j] = 1;
			}
				
		}
	}
*/
