#include <stdlib.h>
#include <stdio.h>

int main(){
	unsigned int sum = 0;
	for(unsigned int i = 1; i < 1000; i++){
		if(i % 3 == 0 || i % 5 == 0){
			// printf("%d\n", i);
			sum += i;
		}
	}
	printf("%u\n", sum);

	return 0;
}