#include <stdio.h>
#include <string.h>

int main() {
	char name[5][50];
	int i, len, check;

	puts("5개의 문자열을 입력하세요");
	for (i = 0; i < 5; i++) {
		printf("%d번째 : ", i + 1);
		gets_s(name[i], sizeof(name[i]));
		if (strlen(name[i]) > strlen(name[i - 1])) {
			check = i;
		}
	}
	printf("가장 긴 이름 : %s\n", name[check]);
	printf("이름의 길이 : %d\n", strlen(name[check]));
	return 0;
}