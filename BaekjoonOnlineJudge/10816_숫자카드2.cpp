#include <iostream>
#include <set>
using namespace std;

int main() {
	int t, n;
	scanf("%d", &t);
	multiset<int> k;
	while (t--) {
		int p;
		scanf("%d", &p);
		k.insert(p);
	}
	scanf("%d", &n);
	while (n--) {
		int p;
		scanf("%d", &p);
		cout << k.count(p) << " ";
	}
	return 0;
}