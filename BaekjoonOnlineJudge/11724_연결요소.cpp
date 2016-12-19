#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> k[1001];
bool chk[1001];

void DFS(int node);

int main() {
	int n, m, count = 0;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++) {
		int u, v;
		scanf("%d %d", &u, &v);
		k[u].push_back(v);
		k[v].push_back(u);
	}
	for (int i = 1; i <= n; i++)	sort(k[i].begin(), k[i].end());
	for (int i = 1; i <= n; i++) {
		if (chk[i] == true)	continue;
		DFS(i);
		count++;
	}
	printf("%d", count);
	return 0;
}

void DFS(int node) {
	chk[node] = true;
	for (int i = 0; i < k[node].size(); i++) {
		int next = k[node][i];
		if (chk[next] == false)	DFS(next);
	}
}