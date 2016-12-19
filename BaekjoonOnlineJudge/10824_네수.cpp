#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

int main() {
	string n1, n2, n3, n4;
	cin >> n1 >> n2 >> n3 >> n4;
	ll N1 = stoll(n1 + n2);
	ll N2 = stoll(n3 + n4);
	cout << N1 + N2 << endl;
	return 0;
}