/*
	[ ��2ȸ ���α׷��� ������ȸ ���⹮��(2014.12) ]

	[ ���� 1 ] - [ 30�� ]
		1 ~ 50 �̳��� ��� �� �߿��� 3�� 5�� ����� �ƴ� Ȧ���� ���� ���ϴ� ���α׷��� �Լ��� �����Ͻÿ�.

	< ó������ >
		1. main() ������ �տ� ���� ������ �ʱ�ȭ�Ѵ�.
		2. �Լ� ȣ��� �տ� ���� ������ �μ��� ������ �� �ּҿ� ���� ȣ���� �����Ѵ�.
		3. �Լ� ���� �κп��� �Ʒ��� ���� �߷��ϰ�, ���� ��� ������ ���� �ڸ����� 3�ڸ��� ���߽ÿ�.
		4. "���� ����� ���� ***�Դϴ�" �� ����� main() ������ �����Ѵ�.

	< ������ >
		number =   1, sum =   1
		number =   7, sum =   8
		number =  11, sum =  19
		number =  13, sum =  32
		number =  17, sum =  49
		number =  19, sum =  68
		number =  23, sum =  91
		number =  29, sum = 120
		number =  31, sum = 151
		number =  37, sum = 188
		number =  41, sum = 229
		number =  43, sum = 272
		number =  47, sum = 319
		number =  49, sum = 368
		��������� ���� 368 �Դϴ�.
*/

#include <stdio.h>

void Odd_number(int * sum);

int main() {
	int result;
	Odd_number(&result);
	printf("��������� ���� %d �Դϴ�.\n", result);
	return 0;
}

void Odd_number(int * sum) {
	int num = 1;
	*sum = 0;

	for (num = 0; num<50; num++) {
		if (num % 2 != 0 && num % 3 != 0 && num % 5 != 0) {
			*sum += num;
			printf("number = %3d, sum = %3d\n", num, *sum);
		}
	}
	return;
}