/*
	[ ��1ȸ ���α׷��� ������ȸ ���⹮��(2013.12) ]

	[ ���� 1 ]
		�Ʒ� ó�����ǿ� �µ��� ���α׷��� �ۼ��Ͻÿ�.

	< ó������ >
		1. ���� 20���� ���ڸ� �����ϴ� �迭 ary�� �����ϰ� 'O'�� �ʱ�ȭ�Ͽ� ����Ѵ�.
		2. ����ڰ� 1���� ������ �Է����� �� �� ��� �ڸ��� 'O'�� �ԷµǾ� ������ 'X'�� ġȯ�ϰ�,
		   'X'�� �ԷµǾ� ������ 'O'�� ġȯ�Ѵ�.

		   [* ��, 0�� ��� ���� ����̴�!]

		����ؼ� ���� ������� ������ �ϳ��� �Է��ϸ� �ٷ� ���� ������� ���� ����� �����Ѵ�.

	< ������ >
		O O O O O O O O O O O O O O O O O O O O
		����Է� : 1
		X X X X X X X X X X X X X X X X X X X X
		����Է� : 2
		O X O X O X O X O X O X O X O X O X O X
		����Է� : 3
		X X O O O X X X O O O X X X O O O X X X
		����Է� : 4
		O X O O X X X X X O O X O X O O X X X X
		����Է� : 5
		X X O O X O X X X O X X O X O X X X X X
*/

#include <stdio.h>

int main() {
	char ary[20];
	int input_num, i;

	for (i = 0; i < 20; i++)
		ary[i] = 'O';

	while (1) {
		for (i = 0; i < 20; i++)
			printf("%c ", ary[i]);
		puts("");

		printf("����Է� : ");
		scanf_s("%d", &input_num);

		if (input_num == 0)
			return 0;

		for (i = 0; i < 20; i++) {
			if (i%input_num == 0) {
				if (ary[i] == 'O')
					ary[i] = 'X';
				else
					ary[i] = 'O';
			}
		}
	}
}