#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

string check(string str) {
	stack<char> m;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(')	m.push('(');
		if (str[i] == ')') {
			if (m.empty())	return "NO";
			else m.pop();
		}
	}
	if (m.empty()) return "YES";
	else return "NO";
}

int main() {
	int N;
	cin >> N;
	while (N--) {
		string temp;
		cin >> temp;
		cout << check(temp) << endl;
	}
	return 0;
}