#include <stdlib.h>
#include <stdio.h>

int main(){
	unsigned long sum = 0;

	unsigned int i = 1, j = 1;
	while(i < 4000000){
		// printf("%u\n", j);
		if(j % 2 == 0){
			sum += j;
		}

		unsigned int x = i + j;
		i = j;
		j = x;
	}

	printf("%lu\n", sum);

	return 0;
}