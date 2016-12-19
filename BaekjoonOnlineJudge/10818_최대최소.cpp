#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	int * N = new int[T];
	for (int i = 0; i < T; i++)
		scanf("%d", &N[i]);
	sort(N, N + T);
	printf("%d %d", N[0], N[T - 1]);
	delete[] N;
	return 0;
}