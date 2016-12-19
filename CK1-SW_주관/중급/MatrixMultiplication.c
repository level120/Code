#include <stdio.h>

int main() {
	int arr_A[3][3] = { 25, 13, 32, 10, 54, 53, 54, 19, 46 };
	int arr_B[3][3] = { 14, 11, 34, 21, 23, 67, 83, 33, 56 };
	int arr_C[3][3];
	int i, j;

	puts("  A 행렬\t  B 행렬\t  C 행렬");
	puts("===========================================");

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (j == 0)
				printf("%d", arr_A[i][j]);
			else
				printf("%4d", arr_A[i][j]);
		}
		if (i == 1)
			printf("   +");
		for (j = 0; j < 3; j++) {
			if (i != 1 && j == 0)
				printf("%8d", arr_B[i][j]);
			else
				printf("%4d", arr_B[i][j]);
		}
		if (i == 1)
			printf("   =");
		for (j = 0; j < 3; j++) {
			arr_C[i][j] = arr_A[i][j] + arr_B[i][j];
			if (i != 1 && j == 0)
				printf("%8d", arr_C[i][j]);
			else
				printf("%4d", arr_C[i][j]);
		}
		puts("");
	}
	return 0;
}