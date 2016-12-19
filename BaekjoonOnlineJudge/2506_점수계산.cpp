#include <iostream>
#include <deque>
using namespace std;

int main() {
	deque<int> n;
	int m, sum = 0;
	cin >> m;
	for (int i = 0; i < m; i++)	{
		int tmp;
		cin >> tmp;
		n.push_back(tmp);
	}
	int tmp = 0;
	for (int i = 0; i < m; i++) {
		if (n[i] == 1) {
			if (tmp == 0)	sum += ++tmp;
			else sum += ++tmp;;
		}
		else tmp = 0;
	}
	cout << sum << endl;
	return 0;
}