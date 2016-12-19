#include <iostream>
#include <string>
using namespace std;
typedef unsigned long long int ll;

string s[10] = { "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };
ll val[10] = { 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000 };

int main() {
	string p, t;
	ll k = 0;
	cin >> t;
	for (int i = 0; i < 10; i++) {
		if (t == s[i])	k = i * 10;
	}
	cin >> t;
	for (int i = 0; i < 10; i++) {
		if (t == s[i])	k += i;
	}
	cin >> t;
	for (int i = 0; i < 10; i++) {
		if (t == s[i])	k *= val[i];
	}
	cout << k;
	return 0;
}