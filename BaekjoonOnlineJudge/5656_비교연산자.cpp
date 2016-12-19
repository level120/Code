#include <cstdio>
char c[3];
char check[3] = { '>', '<', '=' };
int main() {
	for (int i = 0; ;i++) {
		int n1, n2, T = -1;
		scanf("%d %s %d", &n1, c, &n2);
		if (c[0] == 'E')	break;
		for (int j = 0; j < 3; j++) {
			if (c[0] == check[j])
				T = j;
		}
		switch (T) {
		case 0:
			printf("Case %d: %s\n", i + 1, c[1] != '=' ? (n1 > n2 ? "true" : "false") : (n1 >= n2 ? "true" : "false"));
			break;
		case 1:
			printf("Case %d: %s\n", i + 1, c[1] != '=' ? (n1 < n2 ? "true" : "false") : (n1 <= n2 ? "true" : "false"));
			break;
		case 2:
			printf("Case %d: %s\n", i + 1, n1 == n2 ? "true" : "false");
			break;
		default:
			printf("Case %d: %s\n", i + 1, n1 != n2 ? "true" : "false");
			break;
		}
	}
	return 0;
}