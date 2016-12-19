#include <cstdio>
#include <set>

int main() {
	std::set<int> k;
	int i = 28;
	while (i--) {
		int t;	scanf("%d", &t);
		k.insert(t);
	}
	for (int i = 0; i < 30; i++)
		if (!k.count(i+1))	printf("%d\n", i+1);
	return 0;
}