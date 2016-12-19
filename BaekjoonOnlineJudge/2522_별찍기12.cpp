#include <iostream>
using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i < N - j - 1)	printf(" ");
			else printf("*");
		}
		puts("");
	}
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N; j++) {
			if (i >= j)	printf(" ");
			else printf("*");
		}
		puts("");
	}
	return 0;
}