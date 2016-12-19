#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string str;
	cin >> str;
	int cnt = str.length();
	string * temp = new string[cnt];
	reverse(str.begin(), str.end());
	for (int i = 0; i < cnt; i++) {
		reverse(str.begin(), str.end());
		temp[i] = str;
		reverse(str.begin(), str.end());
		str.pop_back();
	}
	sort(temp, temp + cnt);
	for (int i = 0; i < cnt; i++)
		cout << temp[i] << endl;
	return 0;
}