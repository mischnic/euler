#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef unsigned int uint;

int main() {
	for (uint a = 1; a < 1000; a++) {
		for (uint b = a; b < 1000; b++) {
			int c = 1000 - a - b;
			if (c < 0 || b > c) {
				continue;
			}
			// printf("%d %d %d\n", a, b, c);
			if (a * a + b * b == c * c) {
				printf("%d^2 + %d^2 = %d^2 and sum is 1000 - %d", a, b, c, a * b * c);
			}
		}
	}

	return 0;
}