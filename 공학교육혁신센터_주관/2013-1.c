/*
	[ 제1회 프로그래밍 경진대회 기출문제(2013.12) ]

	[ 문제 1 ]
		아래 처리조건에 맞도록 프로그램을 작성하시오.

	< 처리조건 >
		1. 먼저 20개의 문자를 저장하는 배열 ary를 생성하고 'O'로 초기화하여 출력한다.
		2. 사용자가 1개의 정수를 입력했을 때 그 배수 자리에 'O'가 입력되어 있으면 'X'로 치환하고,
		   'X'가 입력되어 있으면 'O'로 치환한다.

		   [* 단, 0은 모든 수의 배수이다!]

		계속해서 같은 방식으로 정수를 하나씩 입력하면 바로 이전 결과에서 위의 기능을 수행한다.

	< 실행결과 >
		O O O O O O O O O O O O O O O O O O O O
		배수입력 : 1
		X X X X X X X X X X X X X X X X X X X X
		배수입력 : 2
		O X O X O X O X O X O X O X O X O X O X
		배수입력 : 3
		X X O O O X X X O O O X X X O O O X X X
		배수입력 : 4
		O X O O X X X X X O O X O X O O X X X X
		배수입력 : 5
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

		printf("배수입력 : ");
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