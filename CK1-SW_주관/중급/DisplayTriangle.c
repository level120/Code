#include <stdio.h>

int main() {
	int input_num;
	while (1) {
		printf("1~20 사이의 숫자를 입력하세요(0:종료) : ");
		scanf_s("%d", &input_num);

		if (input_num == 0) {
			puts("종료합니다.");
			return 0;
		}
		else if (input_num < 1 || input_num > 20)
			puts("범위를 벗어났습니다.");
		else {
			int i, j;
			for (i = 0; i < input_num; i++) {
				for (j = 0; j < i + 1; j++)
					printf("*");
				puts("");
			}
		}
	}
}