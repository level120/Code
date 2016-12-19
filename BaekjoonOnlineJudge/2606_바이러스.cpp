#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#define START 1
using namespace std;

vector<int> n[101];
bool chk[101];

void DFS(int start);

int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	while (y--) {
		int u, v;
		scanf("%d %d", &u, &v);
		n[u].push_back(v);
		n[v].push_back(u);
	}
	for (int i = 1; i <= x; i++)	sort(n[i].begin(), n[i].end());
	DFS(START);
	printf("%d", count(&chk[0], &chk[x + 1], true) - 1);
	return 0;
}

void DFS(int start) {
	chk[start] = true;
	for (int i = 0; i < n[start].size(); i++) {
		int next = n[start][i];
		if (chk[next] == false)	DFS(next);
	}
}