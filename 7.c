#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef unsigned int uint;

// sieve of Eratosthenes
uint* sieve(uint upToN){
	uint *list = malloc(upToN * sizeof(uint));
	for(uint i = 0; i < upToN; i++){
		list[i] = i;
	}

	for(uint p = 2; p < upToN;){
next_p:
		for(uint i = 2*p; i < upToN; i += p){
			list[i] = 0;
		}
		// find next prime
		for(uint i = p+1; i < upToN; i++){
			if(list[i] > 0) {
				p = i;
				goto next_p;
			}
		}
		// there is no larger prime
		break;
	}

	return list;
}

uint nthPrime(uint n){
	uint uppperBound = n < 6 ? 6 * log(6 * log(6)) : n * log(n * log(n)); // p_n < n ln (n ln n) for n ≥ 6
	
	uint* list = sieve(uppperBound);

	// get nth prime
	uint counter = 0;
	for(uint i = 2; i < uppperBound; i++){
		if(list[i] > 0){
			counter++;
		}
		if(counter == n){
			printf("%d %d\n", i, n);
			counter = i;
			break;
		}
	}

	uint prime = list[counter];
	free(list);
	return prime;
}

int main(){
	printf("%d\n", nthPrime(10001));

	return 0;
}