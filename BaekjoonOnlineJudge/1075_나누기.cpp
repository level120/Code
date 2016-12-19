#include <cstdio>
using namespace std;
#pragma warning(disable:4996)

int main() {
	int n, f;
	scanf("%d %d", &n, &f);
	n /= 100;	n *= 100;
	for (int i = 0; i < n; n++, i++) if (n % f == 0)	break;
	printf("%02d", n % 100);
	return 0;
}