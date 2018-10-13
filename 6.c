#include <stdlib.h>
#include <stdio.h>

inline unsigned int sumOfSquares(unsigned int max){
	unsigned int result = 0;
	for(int i = 0; i <= max; i++){
		result += i*i;
	}
	return result;
}

inline unsigned int squareOfSum(unsigned int max){
	unsigned int sum = ((max+1)*max)/2;
	return sum * sum;
}

int main(){
	printf("%d\n", squareOfSum(10) - sumOfSquares(10));
	printf("%d\n", squareOfSum(100) - sumOfSquares(100));

	return 0;
}