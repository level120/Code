#include <cstdio>
int main() {
	int n, ans = 0;
	scanf("%d", &n);
	while(n--) {
		int h, m, d;
		scanf("%d:%d %d", &h, &m, &d);
		h = h * 100 + m;
		for (int i = 0; i < d; i++) {
			if (h % 100 > 59)	h = ((h / 100) + 1) * 100;
			if ((h / 100) > 6 && (h / 100) < 19)	ans += 10;
			else ans += 5;
			h++;
		}
	}
	printf("%d", ans);
	return 0;
}