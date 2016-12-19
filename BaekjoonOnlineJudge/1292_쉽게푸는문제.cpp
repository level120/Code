#include <cstdio>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int ans = 0, cnt = 0;
	for (int i = 1; i < 1000; i++) {
		bool chk = false;
		for (int j = 0; j < i; j++)	{
			++cnt;
			if (cnt >= a && cnt <= b)	ans += i;
			if (cnt > b)	{ chk = true; break; }
		}
		if (chk)	break;
	}
	printf("%d", ans);
	return 0;
}