#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;

queue<int> b;
stack<int> d;
vector<int> c[1001];

bool check[1001];

void bfs(int start);
void dfs(int node);

int main() {
	int n, m, v;
	scanf("%d %d %d", &n, &m, &v);
	while (m--) {
		int x, y;
		scanf("%d %d", &x, &y);
		c[x].push_back(y);
		c[y].push_back(x);
	}
	for (int i = 0; i < n; i++)
		sort(c[i].begin(), c[i].end());
	dfs(v);
	puts("");
	bfs(v);
	return 0;
}

void bfs(int start) {
	memset(check, false, sizeof(check));
	check[start] = true;
	b.push(start);
	while (!b.empty()) {
		int node = b.front();
		printf("%d ", node);
		b.pop();
		for (int i = 0; i < c[node].size(); i++) {
			int next = c[node][i];
			if (check[next] == false) {
				check[next] = true;
				b.push(next);
			}
		}
	}
}

void dfs(int node) {
	check[node] = true;
	printf("%d ", node);
	for (int i = 0; i < c[node].size(); i++) {
		int next = c[node][i];
		if (check[next] == false)	dfs(next);
	}
}