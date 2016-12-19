#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	stack<int> m;
	int N;
	cin >> N;
	while (N--) {
		string str;
		cin >> str;
		if (str == "push") {
			int temp;
			cin >> temp;
			m.push(temp);
		}
		else if (str == "pop") {
			cout << (m.empty() ? -1 : m.top()) << endl;
			if (!m.empty())	m.pop();
		}
		else if (str == "size") cout << m.size() << endl;
		else if (str == "empty") cout << m.empty() << endl;
		else if (str == "top") cout << (m.empty() ? -1 : m.top()) << endl;
		else cout << (m.empty() ? -1 : '0') << endl;
	}
	return 0;
}