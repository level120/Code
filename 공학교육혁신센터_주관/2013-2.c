/*
	[ ��1ȸ ���α׷��� ������ȸ ���⹮��(2013.12) ]

	[ ���� 2 ]
		ö���� �ڽ��� ������¿��� ��� ������ �����Ͽ� �ܹ��� ��縦 �����Ͽ�����,
		���̴� 5����¥�� �ܹ��� 1���� �� �� �ְ� �Ǿ���.
		�׷���, ������ 2������ ���ݰ� 2������ ��� �����ؾ� �Ѵ�.
		<�Ʒ�>�� 1 ~ 3 �� �Ѱ��� ����� �� 1�ʸ��� �������� �߻��ϴٰ� �ٽ� ������ �ܰ� 0���� �Ǹ� ��������!

		�Ʒ��� ����� ���� ���� ������ ����� ����Ͻÿ�.

	< ��    �� >
		1. 0�϶� : [�ܹ��� �Ǹž�(ham)] : 5���� ���ϱ�!
		2. 1�϶� : [����(tax)] : 4���� ����!
		3. 2�϶� : [���(an)] : 4���� ����!

	< ó������ >
		1. <�Ʒ�>�� ����� ()���� ���� ���!
		2. <�Ʒ�>�� ���� ��࿬���� ���!

	< ������ >
		�ܹ��� ��縦 �����մϴ�!
		�ܹ��� �Ǹ�! �������� 5����!
		���� : **�������� 1����!
		�ܹ��� �Ǹ�! **�������� 6����!
		����� : **�������� 2����!
		�ܹ��� �Ǹ�! **�������� 7����!
		�ܹ��� �Ǹ�! **�������� 12����!
		�ܹ��� �Ǹ�! **�������� 17����!
		����� : **�������� 13����!
		����� : **�������� 9����!
		����� : **�������� 5����!
		���� : **�������� 1����!
		����� : **�������� -3����!
		����� ���߽��ϴ�. �ܰ���� -3���� �Դϴ�.
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

	puts("�ܹ��� ��縦 �����մϴ�!");
	printf("�ܹ��� �Ǹ�! �������� %d����!\n", account->total);

	while (1) {
		Sleep(1000);
		seed1 = rand();
		srand((unsigned)time(NULL));
		seed2 = rand();
		num = (seed1*seed2) % 3;

		if (account->total <= 0) {
			printf("����� ���߽��ϴ�. �ܰ���� %d���� �Դϴ�.\n", account->total);
			return 0;
		}
		
		switch (num) {
		case 0:
			account->ham += 5;
			account->total = account->ham + account->tax + account->man;
			printf("�ܹ��� �Ǹ�! **�������� %d����!\n", account->total);
			break;
		case 1:
			account->tax -= 4;
			account->total = account->ham + account->tax + account->man;
			printf("���� : **�������� %d����!\n", account->total);
			break;
		case 2:
			account->man -= 4;
			account->total = account->ham + account->tax + account->man;
			printf("����� : **�������� %d����!\n", account->total);
			break;
		}
	}
}