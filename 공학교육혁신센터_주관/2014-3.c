/*
	[ 제2회 프로그래밍 경진대회 기출문제(2014.12) ]

	[ 문제 3 ] - [ 60점 ]
		1과 10000 사이의 모든 완전수를 구하여 출력하는 프로그램을 작성하시오.
		완전수란 자기 자신을 제외한 양의 약수들의 합을 더했을 때 자기 자신이 되는 양의 정수를 말한다.
		100 미만의 완전수의 예는 6과 28이다.

		1 + 2 + 3 = 6
		1 + 2 + 4 + 7 + 14 = 28

	< 실행결과 >
		1과 10000 사이의 완전수는 6, 28, 496, 8128 이다.
*/

#include <stdio.h>
#include <math.h>

int main() {
	int i = 2, result = 0;

	printf("1과 10000 사이의 완전수는 ");
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
	printf("\b\b 이다.\n");
	return 0;
}