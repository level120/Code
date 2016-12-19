/*
	[ 제3회 프로그래밍 경진대회 기출문제(2015.12) ]

	[ 문제 1 ] - [ 50점 ]
		3개의 변 길이에 해당하는 숫자를 입력받아서 삼각형인지, 직각삼각형인지
		삼각형이 되지 않는지를 판별하는 프로그램을 작성하시오.

	< 입   력 >
		3개 변의 길이를 입력받습니다.
		첫 번째 변의 길이: 5
		두 번째 변의 길이: 6
		세 번째 변의 길이: 7

	< 출   력 >
		삼각형입니다.

	< H i n t >
		삼각형은 가장 긴 변의 길이가 나머지 두 개 변의 길이 합계보다 짧아야 합니다.
		직각삼각형은 가장 긴 변의 제곱과 나머지 두 개 변 제곱 합이 같습니다.
*/

#include <stdio.h>
#include <stdlib.h>

int comp(const void * n1, const void * n2);

int main() {
	int num[3];
	puts("3개 변의 길이를 입력받습니다.");
	printf("첫 번째 변의 길이: ");
	scanf_s("%d", &num[0]);
	printf("두 번째 변의 길이: ");
	scanf_s("%d", &num[1]);
	printf("세 번째 변의 길이: ");
	scanf_s("%d", &num[2]);

	qsort(num, 3, sizeof(int), comp);
	
	if (num[0] < 1 || num[1] < 1 || num[2] < 1)
		puts("삼각형이 아닙니다.");
	else if ((num[0] * num[0]) + (num[1] * num[1]) == num[2] * num[2])
		puts("직각삼각형입니다.");
	else if (num[0] + num[1] <= num[2])
		puts("삼각형이 아닙니다.");
	else
		puts("삼각형입니다.");
	return 0;
}

int comp(const void * n1, const void * n2) {
	return *(int *)n1 > *(int *)n2 ? 1 : *(int *)n1 < *(int *)n2 ? -1 : 0;
}