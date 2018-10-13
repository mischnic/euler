#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int isPalindrom(unsigned int number) {
	unsigned int reverse = 0;
	unsigned int n = number;
	while(n > 0){
		reverse = reverse * 10 + n % 10;
		n /= 10;
	}
	return reverse == number;
}

int main(){
	const int max = 999;

	unsigned int sum = 0;

	unsigned int largest = 0;
	for(short x = max; x > 0; x--) {
		for(short y = max; y > 0; y--) {
			int num = x*y;
			if(num > largest && isPalindrom(num)){
				largest = num;
			}
		}
	}
	printf("%u\n", largest);

	return 0;
}