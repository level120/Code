#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> x;
	int n, m;
	scanf("%d %d", &n, &m);
	n += m;
	while (n--) {
		int tmp;
		scanf("%d", &tmp);
		x.push_back(tmp);
	}
	sort(x.begin(), x.end());
	for (auto i : x)	cout << i << " ";
	return 0;
}