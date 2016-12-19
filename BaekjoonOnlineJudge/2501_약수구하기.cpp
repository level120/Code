#include <cstdio>
int ans[10000];
int main() {
	int n, k, s = 0, i = 0;
	scanf("%d %d", &n, &k);
	while (s < n / 2) {
		if (n%++s == 0)
			ans[i++] = s;
	}
	ans[i] = n;
	printf("%d", ans[k - 1]);
	return 0;
}