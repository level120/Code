#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T, N;
	scanf("%d", &T);
	long int * card = new long int[T];
	for (int i = 0; i < T; i++)
		scanf("%ld", &card[i]);
	sort(card, card + T);
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		long int tmp;
		scanf("%ld", &tmp);
		printf("%d ", binary_search(card, card + T, tmp));
	}
	delete[] card;
	return 0;
}