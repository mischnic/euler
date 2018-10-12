#include <stdlib.h>
#include <stdio.h>

int main(){
	unsigned long n = 600851475143;

	long unsigned x = n;
	for(long unsigned b = 2; x > 1; ){
		if(x % b == 0){
			if(x == b){
				break;
			} else {
				x /= b;
				b = 2;
			}
		} else {
			b += 1;
		}
	}

	printf("%lu\n", x);

	return 0;
}