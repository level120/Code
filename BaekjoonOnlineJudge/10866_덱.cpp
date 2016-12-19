#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
	deque<int> m;
	int n;
	cin >> n;
	while (n--) {
		string tmp;
		cin >> tmp;
		if (tmp == "push_front") {
			int temp;
			cin >> temp;
			m.push_front(temp);
		}
		else if (tmp == "push_back") {
			int temp;
			cin >> temp;
			m.push_back(temp);
		}
		else if (tmp == "pop_front") {
			cout << (m.empty() ? -1 : m.front()) << endl;
			if (!m.empty())	m.pop_front();
		}
		else if (tmp == "pop_back") {
			cout << (m.empty() ? -1 : m.back()) << endl;
			if (!m.empty())	m.pop_back();
		}
		else if (tmp == "size") cout << m.size() << endl;
		else if (tmp == "empty") cout << (m.empty() ? 1 : 0) << endl;
		else if (tmp == "front") cout << (m.empty() ? -1 : m.front()) << endl;
		else cout << (m.empty() ? -1 : m.back()) << endl;
	}
	return 0;
}