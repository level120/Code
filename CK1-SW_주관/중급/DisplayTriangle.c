#include <stdio.h>

int main() {
	int input_num;
	while (1) {
		printf("1~20 ������ ���ڸ� �Է��ϼ���(0:����) : ");
		scanf_s("%d", &input_num);

		if (input_num == 0) {
			puts("�����մϴ�.");
			return 0;
		}
		else if (input_num < 1 || input_num > 20)
			puts("������ ������ϴ�.");
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