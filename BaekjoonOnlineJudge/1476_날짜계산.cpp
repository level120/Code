#include <iostream>
using namespace std;

int main() {
	int e, s, m, ans = 0;
	scanf("%d %d %d", &e, &s, &m);
	int a = 0, b = 0, c = 0;
	for (int i = 0;; i++) {
		if (a == e && b == s && c == m) {
			ans = i;
			break;
		}
		a++; b++; c++;
		if (a > 15)	a = 1;
		if (b > 28)	b = 1;
		if (c > 19)	c = 1;
	}
	printf("%d", ans);
	return 0;
}