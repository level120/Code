#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	int * num = new int[N];
	for (int i = 0; i < N; i++)
		scanf("%d", &num[i]);
	sort(num, num + N);
	for (int i = 0; i < N; i++)
		printf("%d\n", num[i]);
	delete[] num;
	return 0;
}