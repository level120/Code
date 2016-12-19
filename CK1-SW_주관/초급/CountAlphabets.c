#include <stdio.h>

int main() {
	char * str = NULL;
	char check_alph = 'A';
	int count, check = 65;
	puts("문자열을 입력하세요:");
	gets_s(str, sizeof(str));

	puts("각 문자의 개수 : ");
	while (1) {
		int buf = getchar();
		count = 0;
		if (buf == check || buf == check + 32) {
			count++;
		}
		check++;
		printf("%c:%d, ", check, count);
		if (check == 96) {
			printf("\b\b\n");
			return 0;
		}
	}
}