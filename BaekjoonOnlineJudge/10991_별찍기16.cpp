#include <iostream>
using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		bool cnt = false;
		for (int j = 0; j < N + i; j++) {
			if (N - i > j + 1)   printf(" ");
			else if (cnt) {
				cnt = false;
				printf(" ");
			}
			else
			{
				cnt = true;
				printf("*");
			}
		}
		puts("");
	}

	return 0;
}