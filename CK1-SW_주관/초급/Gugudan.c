#include <stdio.h>

int main() {
	int i, j, gugudan[9][9];

	puts("    ��   1   2   3   4   5   6   7   8   9");
	puts("������������������������������������������");

	for (i = 1; i < 10; i++) {
		printf(" %2d ��", i);
		for (j = 1; j < 10; j++) {
			gugudan[i - 1][j - 1] = i * j;
			printf("  %2d", gugudan[i - 1][j - 1]);
		}
		puts("");
	}
	return 0;
}