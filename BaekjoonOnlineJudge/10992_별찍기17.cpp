#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N + i; j++) {
			if ((j + 1 == N - i) || (j + 1 == N + i))	printf("*");
			else printf(" ");
		}
		puts("");
	}
	for (int i = 0; i < N * 2 - 1; i++)	printf("*");
	puts("");
	return 0;
}