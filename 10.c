#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

typedef unsigned int uint;
typedef unsigned long ulong;

// sieve of Eratosthenes
ulong* sieve(ulong upToN){
	ulong *list = malloc(upToN * sizeof(ulong));
	for(ulong i = 0; i < upToN; i++){
		list[i] = i;
	}

	for(ulong p = 2; p < upToN;){
next_p:
		for(ulong i = 2*p; i < upToN; i += p){
			list[i] = 0;
		}
		// find next prime
		for(ulong i = p+1; i < upToN; i++){
			if(list[i] > 0) {
				p = i;
				goto next_p;
			}
		}
		// there is no larger prime
		break;
	}

	list[1] = 0; // 1 is not a prime

	return list;
}

ulong sumOfPrimesBelow(ulong x){
	ulong *list = sieve(x);
	ulong sum = 0;

	for(ulong i = 0; i < x-1; i++){
		if(list[i] != 0){
			// printf("%d\n", list[i]);
			sum += list[i];
		}
	}


	free(list);
	return sum;
}

int main(){
	printf("%lu\n", sumOfPrimesBelow(2000000));

	return 0;
}