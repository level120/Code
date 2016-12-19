#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
	int count;
}Dice_count;

int Dice(int seed1, int seed2);

int main() {
	int i, j, testcase = 0, count = 1200;
	Dice_count num[11];
	Dice_count * sum = &num;

	for (i = 0; i < 11; i++)
		(sum + i)->count = 0;

	while (count > 0) {
		testcase = Dice(testcase, count);
		switch (testcase) {
		case 2:
			(sum + 0)->count++;
			break;
		case 3:
			(sum + 1)->count++;
			break;
		case 4:
			(sum + 2)->count++;
			break;
		case 5:
			(sum + 3)->count++;
			break;
		case 6:
			(sum + 4)->count++;
			break;
		case 7:
			(sum + 5)->count++;
			break;
		case 8:
			(sum + 6)->count++;
			break;
		case 9:
			(sum + 7)->count++;
			break;
		case 10:
			(sum + 8)->count++;
			break;
		case 11:
			(sum + 9)->count++;
			break;
		case 12:
			(sum + 10)->count++;
			break;
		}
		count--;
	}

	for (i = 2; i < 13; i++) {
		printf("%d[%3d]", i, (sum + (i - 2))->count);
		for (j = 0; j < (sum + (i - 2))->count / 5; j++)
			printf("*");
		puts("");
	}
	return 0;
}

int Dice(int seed1, int seed2) {
	int seed3;
	unsigned long dice;

	srand((unsigned)time(NULL));
	seed3 = rand();
	dice = ((seed1 * seed2 * seed3) % 11) + 2;

	return (int)dice;
}