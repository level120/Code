#include <cstdio>
#include <queue>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, k, ans = 0;
		scanf("%d %d", &n, &k);
		queue<int> candy;
		while (n--) {
			int tmp;
			scanf("%d", &tmp);
			candy.push(tmp);
		}
		while (!candy.empty()) {
			ans += (candy.front() / k);
			candy.pop();
		}
		printf("%d\n", ans);
	}
	return 0;
}