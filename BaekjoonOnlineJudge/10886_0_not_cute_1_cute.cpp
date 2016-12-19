#include <cstdio>
int main() {
	int n, c = 0, k = 0;
	scanf("%d", &n);
	while (n--) {
		int l;
		scanf("%d", &l);
		l ? c++ : k++;
	}
	c > k ? puts("Junhee is cute!") : puts("Junhee is not cute!");
	return 0;
}