#include <stdio.h>

int main() {
	int i, sum = 0;

	for (i = 1; i <= 20; i++) {
		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0) {
			sum += i;
			printf("i = %2d, sum = %2d\n", i, sum);
		}
	}
	return 0;
}