#include <iostream>
#include <algorithm>
using namespace std;

struct T{
	int x, y;
};

bool comp(T a, T b) {
	if (a.x != b.x)	return a.x < b.x;
	return a.y < b.y;
}

int main() {
	int N;
	cin >> N;
	T * K = new T[N];
	for (int i = 0; i < N; i++) cin >> K[i].x >> K[i].y;
	sort(K, K + N, comp);
	for (int i = 0; i < N; i++) cout << K[i].x << " " << K[i].y << endl;
	delete[] K;
	return 0;
}