#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	string tmp;
	cin >> tmp;
	int len = tmp.length();
	bool check = false;
	stack<int> k;
	for (int i = 0; i < len; i++) {
		if (tmp[i] == '{') {
			if (check) puts("");
			int rec = k.size();
			for (int j = 0; j < rec; j++)	printf("  ");
			puts("{");
			k.push(1);
			check = false;
		}
		else if (tmp[i] == '}') {
			k.pop();
			if (check && tmp[i-1]!='}')	puts("");
			int rec = k.size();
			for (int j = 0; j < rec; j++)	printf("  ");
			printf(tmp[i+1]==','?"}":"}\n");
		}
		else {
			if (tmp[i] != ',') {
				if (!check) {
					int rec = k.size();
					for (int j = 0; j < rec; j++)	printf("  ");
				}
				printf("%c", tmp[i]);
				check = true;
			}
			else {
				if (tmp[i-1]=='{' || tmp[i-1]==',') {
					int rec = k.size();
					for (int j = 0; j < rec; j++)	printf("  ");
				}
				puts(",");
				check = false;
			}
		}
	}
	return 0;
}