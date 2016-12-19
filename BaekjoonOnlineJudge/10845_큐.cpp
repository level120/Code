#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
	queue<int> m;
	int n;
	cin >> n;
	while (n--) {
		string tmp;
		cin >> tmp;
		if (tmp == "push") {
			int temp;
			cin >> temp;
			m.push(temp);
		}
		else if (tmp == "pop") {
			cout << (m.empty() ? -1 : m.front()) << endl;
			if (!m.empty())	m.pop();
		}
		else if (tmp == "size") cout << m.size() << endl;
		else if (tmp == "empty") cout << (m.empty() ? 1 : 0) << endl;
		else if (tmp == "front") cout << (m.empty() ? -1 : m.front()) << endl;
		else cout << (m.empty() ? -1 : m.back()) << endl;
	}
	return 0;
}