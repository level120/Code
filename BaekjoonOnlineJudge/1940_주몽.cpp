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

�� Ǯ�̴� O(n^2) �����.

������ O(log(n)) ���� Ǯ�� �ִ� ����� ����.

����Ž�� ����� �����ϸ� ����.