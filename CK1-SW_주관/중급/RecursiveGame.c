#include <stdio.h>
#include <math.h>

int main() {
	int num1, num2, half, temp1, temp2;

	while (1) {
		printf("The 1st Number A: ");
		scanf_s("%d", &num1);
		printf("The 2nd Number B: ");
		scanf_s("%d", &num2);

		if (num1 == 0 || num2 == 0)
			return 0;

		temp1 = num1; temp2 = num2;

		while (temp1 != 0 && temp2 != 0) {
			half = abs(temp1 - temp2);
			if (half % 2 == 0) {
				temp1 /= 2;
				temp2 += (half / 2);
			}
			else {
				temp2 /= 2;
				temp1 += (half / 2);
			}
		}
		if (temp1 == 0)
			printf("winner = %d\n", num1);
		else
			printf("winner = %d\n", num2);
		puts("");
	}
}