#include <stdio.h>

int main() {
	int i, j;
	char alph = 'A';

	for (i = 0; i < 26; i++) {
		for (j = 0; j <= i; j++)
			printf("%c", alph + j);
		puts("");
	}
	return 0;
}