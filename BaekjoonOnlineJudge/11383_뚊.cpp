#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	int n, m;
	char c[11][21];
	char r[11][21];
	scanf("%d %d", &n, &m);
	getchar();
	for(int i=0; i<n; i++) {
		for (int j = 0; j < m * 2; j += 2) {
			char tmp = getchar();
			c[i][j] = tmp;
			c[i][j + 1] = tmp;
		}
		getchar();
		c[i][m * 2] = '\0';
	}
	bool res = true;
	for (int i = 0; i < n; i++) {
		scanf("%s", r[i]);
		if (strcmp(r[i], c[i]))	res = false;
	}
	if (res)	printf("Eyfa");
	else		printf("Not Eyfa");
	return 0;
}