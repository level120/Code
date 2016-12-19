#include <iostream>
#include <string>
using namespace std;
typedef unsigned long long int ll;
#pragma warning(disable:4996)

int main() {
	string n;
	bool check = false;
	cin >> n;
	int len = n.length();
	for (int i = 0; i < len; i++) {
		ll tmp1 = 1, tmp2 = 1;
		for (int j = 0; j < i; j++) {
			tmp1 *= (ll)n[j] - 48;
		}
		for (int j = i; j < len; j++) {
			tmp2 *= (ll)n[j] - 48;
		}
		if (tmp1 == tmp2) { check = true; break; }
	}
	printf("%s", check ? "YES" : "NO");
	return 0;
}