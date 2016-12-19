#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	map<int, string> a;
	map<string, int> b;
	for (int i = 1; i <= n; i++) {
		char t[21];
		scanf("%s", t);
		a[i] = t;
		b[t] = i;
	}
	while (m--) {
		char u[21];
		scanf("%s", u);
		int num;
		if (u[0] > 47 && u[0] < 58)	{
			num = atoi(u);
			cout << a[num] << endl;
		}
		else {
			string t = u;
			printf("%d\n", b[t]);
		}

	}
	return 0;
}