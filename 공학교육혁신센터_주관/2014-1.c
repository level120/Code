/*
	[ 제2회 프로그래밍 경진대회 기출문제(2014.12) ]

	[ 문제 1 ] - [ 30점 ]
		1 ~ 50 이내의 모두 수 중에서 3과 5의 배수가 아닌 홀수의 합을 구하는 프로그램을 함수로 구현하시오.

	< 처리조건 >
		1. main() 측에서 합에 대한 변수를 초기화한다.
		2. 함수 호출시 합에 대한 변수를 인수로 지정한 후 주소에 의한 호출을 적용한다.
		3. 함수 정의 부분에서 아래와 같이 추력하고, 정수 출력 데이터 값은 자리수를 3자리로 맞추시오.
		4. "최종 결과의 합은 ***입니다" 의 출력은 main() 측에서 수행한다.

	< 실행결과 >
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
		최종결과의 합은 368 입니다.
*/

#include <stdio.h>

void Odd_number(int * sum);

int main() {
	int result;
	Odd_number(&result);
	printf("최종결과의 합은 %d 입니다.\n", result);
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