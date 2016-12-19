#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int joi = 0, ioi = 0, t;
	t = s.length();
	for (int i = 0; i < t - 2; i++) {
		if (s[i] == 'J' && s[i + 1] == 'O' && s[i + 2] == 'I')	++joi;
		if (s[i] == 'I' && s[i + 1] == 'O' && s[i + 2] == 'I')	++ioi;
	}
	printf("%d\n%d", joi, ioi);
	return 0;
}