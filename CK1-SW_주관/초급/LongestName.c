#include <stdio.h>
#include <string.h>

int main() {
	char name[5][50];
	int i, len, check;

	puts("5���� ���ڿ��� �Է��ϼ���");
	for (i = 0; i < 5; i++) {
		printf("%d��° : ", i + 1);
		gets_s(name[i], sizeof(name[i]));
		if (strlen(name[i]) > strlen(name[i - 1])) {
			check = i;
		}
	}
	printf("���� �� �̸� : %s\n", name[check]);
	printf("�̸��� ���� : %d\n", strlen(name[check]));
	return 0;
}