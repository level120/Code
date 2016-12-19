#include <iostream>
#include <cstdio>
#include <algorithm>
int m[5000000];
int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++)	scanf("%d ", &m[i]);
	std::nth_element(m, m + k - 1, m + n);
	printf("%d", m[k - 1]);
	return 0;
}