#include <stdlib.h>
#include <stdio.h>

int main(){
	unsigned int num;
	for(num = 1; ; num++){
		for(unsigned short i = 1; i <= 20; i++){
			if(num % i > 0){
				goto continue_outer;
			}
		}
		break;

		continue_outer: ;
	}

	printf("%d\n", num);

	return 0;
}