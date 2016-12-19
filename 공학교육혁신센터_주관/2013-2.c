/*
	[ 제1회 프로그래밍 경진대회 기출문제(2013.12) ]

	[ 문제 2 ]
		철수는 자신의 은행계좌에서 모든 현금을 인출하여 햄버거 장사를 시작하였으며,
		드이더 5만원짜리 햄버거 1개를 팔 수 있게 되었다.
		그러나, 가끔씩 2만원의 세금과 2만원의 운영비를 지불해야 한다.
		<아래>의 1 ~ 3 중 한가지 사건이 매 1초마다 무작위로 발생하다가 다시 통장의 잔고가 0원이 되면 게임종료!

		아래의 출력의 예와 같은 형식의 결과를 출력하시오.

	< 아    래 >
		1. 0일때 : [햄버거 판매액(ham)] : 5만원 더하기!
		2. 1일때 : [세금(tax)] : 4만원 빼기!
		3. 2일때 : [운영비(an)] : 4만원 빼기!

	< 처리조건 >
		1. <아래>에 기재된 ()안의 변수 사용!
		2. <아래>를 계산시 축약연산자 사용!

	< 실행결과 >
		햄버거 장사를 시작합니다!
		햄버거 판매! 보유현금 5만원!
		세금 : **보유현금 1만원!
		햄버거 판매! **보유현금 6만원!
		식재료 : **보유현금 2만원!
		햄버거 판매! **보유현금 7만원!
		햄버거 판매! **보유현금 12만원!
		햄버거 판매! **보유현금 17만원!
		식재료 : **보유현금 13만원!
		식재료 : **보유현금 9만원!
		식재료 : **보유현금 5만원!
		세금 : **보유현금 1만원!
		식재료 : **보유현금 -3만원!
		사업이 망했습니다. 잔고액은 -3만원 입니다.
*/

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

typedef struct {
	int ham, tax, man, total;
} Account;

int main() {
	int num, seed1, seed2;
	Account MY_ACCOUNT;
	Account * account = &MY_ACCOUNT;

	account->ham = 5; account->tax = 0; account->man = 0;
	account->total = account->ham + account->tax + account->man;

	puts("햄버거 장사를 시작합니다!");
	printf("햄버거 판매! 보유현금 %d만원!\n", account->total);

	while (1) {
		Sleep(1000);
		seed1 = rand();
		srand((unsigned)time(NULL));
		seed2 = rand();
		num = (seed1*seed2) % 3;

		if (account->total <= 0) {
			printf("사업이 망했습니다. 잔고액은 %d만원 입니다.\n", account->total);
			return 0;
		}
		
		switch (num) {
		case 0:
			account->ham += 5;
			account->total = account->ham + account->tax + account->man;
			printf("햄버거 판매! **보유현금 %d만원!\n", account->total);
			break;
		case 1:
			account->tax -= 4;
			account->total = account->ham + account->tax + account->man;
			printf("세금 : **보유현금 %d만원!\n", account->total);
			break;
		case 2:
			account->man -= 4;
			account->total = account->ham + account->tax + account->man;
			printf("식재료 : **보유현금 %d만원!\n", account->total);
			break;
		}
	}
}