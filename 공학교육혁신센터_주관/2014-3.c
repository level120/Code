/*
	[ ��2ȸ ���α׷��� ������ȸ ���⹮��(2014.12) ]

	[ ���� 3 ] - [ 60�� ]
		1�� 10000 ������ ��� �������� ���Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
		�������� �ڱ� �ڽ��� ������ ���� ������� ���� ������ �� �ڱ� �ڽ��� �Ǵ� ���� ������ ���Ѵ�.
		100 �̸��� �������� ���� 6�� 28�̴�.

		1 + 2 + 3 = 6
		1 + 2 + 4 + 7 + 14 = 28

	< ������ >
		1�� 10000 ������ �������� 6, 28, 496, 8128 �̴�.
*/

#include <stdio.h>
#include <math.h>

int main() {
	int i = 2, result = 0;

	printf("1�� 10000 ������ �������� ");
	while (1) {
		if (i == 2 || i == 3 || i == 5) {
			result = pow((double)2, (double)i - 1)*(pow((double)2, (double)i) - 1);
			if (result > 10000 || i > 10000)
				break;
			printf("%d, ", result);
		}
		else if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0) {
			result = pow((double)2, (double)i - 1)*(pow((double)2, (double)i) - 1);
			if (result > 10000 || i > 10000)
				break;
			printf("%d, ", result);
		}
		i++;
	}
	printf("\b\b �̴�.\n");
	return 0;
}