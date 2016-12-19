#include <cstdio>
typedef long long int ll;
ll tmp[100];
int main() {
	int n;
	scanf("%d", &n);
	tmp[0] = 1L;	tmp[1] = 1L;
	for (int i = 2; i <= n; i++)
		tmp[i] = tmp[i - 2] + tmp[i - 1];
	printf("%lld", tmp[n - 1]);
	return 0;
}