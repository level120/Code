#include <iostream>
#include <algorithm>
using namespace std;

int GCD(int x, int y) {
	while (y != 0) {
		int r = x%y;
		x = y;
		y = r;
	}
	return x;
}

int main() {
	int n;
	cin >> n;
	while (n--) {
		int a, b, tmp;
		cin >> a >> b;
		tmp = GCD(a, b);
		cout << (a * b / tmp) << " " << tmp << endl;
	}
	return 0;
}