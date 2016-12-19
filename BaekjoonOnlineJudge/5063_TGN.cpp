#include <cstdio>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int r, e, c, ans = 0;
		scanf("%d %d %d", &r, &e, &c);
		ans = e - c;
		r < ans ? puts("advertise") : r > ans ? puts("do not advertise") : puts("does not matter");
	}
	return 0;
}