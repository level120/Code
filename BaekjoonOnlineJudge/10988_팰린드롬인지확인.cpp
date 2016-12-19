#include <cstdio>
#include <iostream>
#include <deque>
using namespace std;

int main() {
	deque<char> t;
	char tmp;
	bool ans = true;
	while(true) {
		scanf("%c", &tmp);
		if (tmp == '\n')	break;
		t.push_back(tmp);
	}
	while (t.size() > 1) {
		if (t.front() == t.back()) {
			t.pop_front();	t.pop_back();
		}
		else { ans = false;  break; }
	}
	printf("%d", ans);
	return 0;
}