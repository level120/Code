#include <iostream>
#include <string>
using namespace std;
#pragma warning(disable:4996)

int main() {
	int m;
	string n;
	cin >> n >> m;
	int len = (stoi(n) > m ? m : stoi(n));
	for (int i = 0, j = 0; i < len; i++, j++) {
		if (j == n.length()) j = 0;
		cout << n[j];
	}
	return 0;
}