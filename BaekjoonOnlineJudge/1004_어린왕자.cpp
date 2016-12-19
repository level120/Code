#include <iostream>
#include <cstdio>
using namespace std;

class Gro {
	int x, y, r;
	
public:
	void input();
	bool Comp(int x1, int y1, int x2, int y2);
};

int main() {
	int testcase;
	scanf("%d", &testcase);
	while (testcase--) {
		int x1, y1, x2, y2, N;
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		scanf("%d", &N);
		Gro * member = new Gro[N];
		int count = 0;
		for (int i = 0; i < N; i++) {
			member[i].input();
		}
		for (int i = 0; i < N; i++) {
			if (member[i].Comp(x1, y1, x2, y2))	count++;
		}
		delete[] member;
		printf("%d\n", count);
	}
	return 0;
}

void Gro::input() {
	scanf("%d %d %d", &x, &y, &r);
}

bool Gro::Comp(int x1, int y1, int x2, int y2) {
	if (x1 == x2 && y1 == y2)	return false;
	else if ((x1 - x)*(x1 - x) + (y1 - y)*(y1 - y) < r*r) {
		if ((x2 - x)*(x2 - x) + (y2 - y)*(y2 - y) > r*r)	return true;
		else return false;
	}
	else if ((x1 - x)*(x1 - x) + (y1 - y)*(y1 - y) > r*r) {
		if ((x2 - x)*(x2 - x) + (y2 - y)*(y2 - y) < r*r)	return true;
		else return false;
	}
	else return false;
}