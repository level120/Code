#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	vector<int> k;
	cin >> n >> m;
	for (int u = 1; u <= n; u++) k.push_back(u);
	printf("<");
	int i = 0, count = 1;
	while (!k.empty()) {
		if (i >= k.size())	i = i%k.size();
		if (count%m==0 && count != 0) {
			vector<int>::iterator itr = find(k.begin(), k.end(), k[i]);
			printf("%d", *itr);
			k.erase(itr);
			i--;
			k.empty() ? printf(">") : printf(", ");
		}
		count++;
		i++;
	}
	return 0;
}