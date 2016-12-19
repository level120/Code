#include <cstdio>

int k[15000];

int main() {
	int n, m, ans = 0;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
		scanf("%d", &k[i]);
	for (int i = 0; i < n-1; i++) {
		for (int j = i+1; j < n; j++) {
			if (k[i] + k[j] == m)	ans++;
		}
	}
	printf("%d", ans);
	return 0;
}

-------------------------------------

위 풀이는 O(n^2) 방식임.

하지만 O(log(n)) 만에 풀수 있는 방법이 있음.

이진탐색 방법을 응용하면 가능.