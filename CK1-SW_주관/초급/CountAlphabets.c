#include <stdio.h>

int main() {
	char * str = NULL;
	char check_alph = 'A';
	int count, check = 65;
	puts("���ڿ��� �Է��ϼ���:");
	gets_s(str, sizeof(str));

	puts("�� ������ ���� : ");
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