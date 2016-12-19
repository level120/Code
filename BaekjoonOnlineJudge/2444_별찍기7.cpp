#include <iostream>
using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N + i; j++) {
			if (N - i > j + 1)	printf(" ");
			else printf("*");
		}
		puts("");
	}
	for (int i = N - 1; i > 0; i--) {
		for (int j = N; j + i > 1; j--) {
			if (i < j)	printf(" ");
			else printf("*");
		}
		puts("");
	}
	return 0;
}