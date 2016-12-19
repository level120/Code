/*
	[ 제2회 프로그래밍 경진대회 기출문제(2014.12) ]

	[ 문제 2 ] - [ 40점 ]
		홀수 값 n을 입력받아 아래와 같은 다이아몬드 모양의 패턴을 출력하는 프로그램을 작성하시오.

	< 처리조건 >
		1. 사용자가 0을 입력하면 종료한다.
		2. 반드시 중첩 반복문을 사용해야 한다.
		3. (n>=5)의 값을 고정하고 프로그램을 작성한 경우 30점 만점으로 채점한다.

	< 실행결과 >
		n의 값을 입력 : 1
		*
		n의 값을 입력 : 7
		   *
		  ***
		 *****
		*******
		 *****
		  ***
		   *
		n의 값을 입력 : 5
		  *
		 ***
		*****
		 ***
		  *
		n의 값을 입력 : 0
		프로그램을 종료합니다.
*/

#include <stdio.h>

int main() {
	int i, num, half, count;

	while (1) {
		printf("n의 값을 입력 : ");
		scanf_s("%d", &num);

		if (num == 0) {
			puts("프로그램을 종료합니다.");
			return 0;
		}

		half = num / 2;
		count = 1;

		while (half != 0) {
			for (i = half; i != 0; i--)
				printf(" ");
			for (i = 0; i < count; i++)
				printf("*");
			puts("");
			half--;
			count += 2;
		}
		while (half != (num / 2) + 1) {
			for (i = half; i > 0; i--)
				printf(" ");
			for (i = count; i > 0; i--)
				printf("*");
			puts("");
			half++;
			count -= 2;
		}
	}
}