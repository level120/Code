#include <cstdio>

char no[10];
int main() {
	for (int i = 0; i < 10; i++)
		scanf("%c", &no[i]);
	int ans = 0;
	for (int i = 0; i < 10; i+=2) {
		ans += (no[i] - '0') * (no[i] - '0');
	}
	printf("%d", ans % 10);
	return 0;
}