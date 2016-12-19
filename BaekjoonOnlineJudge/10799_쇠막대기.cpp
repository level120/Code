#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	stack<char> m;
	string str;
	cin >> str;
	int sum = 0;
	bool check = false;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(')	{
			m.push('(');
			check = true;
		}
		if (str[i] == ')') {
			if (check)	sum += (m.size() - 1);
			else		sum++;
			check = false;
			m.pop();
		}
	}
	cout << sum << endl;
	return 0;
}