#include <stdio.h>

enum { A, B, C, D, F };

typedef struct {
	int count;
} Grade;

int main() {
	int i, j, input = 0;
	Grade grade[5];
	Grade * ptr = grade;

	for (i = A; i < F + 1; i++)
		(ptr + i)->count = 0;

	printf("영어 점수를 입력하세요 : ");

	while (input >= 0) {
		scanf_s("%d", &input);
		if (input > 100);
		else if (input >= 90)
			(ptr + A)->count++;
		else if (input >= 80)
			(ptr + B)->count++;
		else if (input >= 70)
			(ptr + C)->count++;
		else if (input >= 60)
			(ptr + D)->count++;
		else
			if(input >= 0)
				(ptr + F)->count++;
	}

	for (i = A; i < F + 1; i++) {
		if (i == F) printf("%c등급 : ", 66 + i);
		else printf("%c등급 : ", 65 + i);
		for (j = 0; j < (ptr + i)->count; j++)
			printf("*");
		printf(" %d", (ptr + i)->count);
		puts("");
	}
	return 0;
}