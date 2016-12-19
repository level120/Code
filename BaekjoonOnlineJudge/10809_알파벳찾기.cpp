#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n[26];
	char temp;
	int cnt = 0;
	for(int i = 0; i < 26; i++)
		n[i] = -1;
	while (~(temp = getchar())) {
		if (n[temp - 97] == -1)	n[temp - 97] = cnt++;
		else cnt++;
	}
	for (int i = 0; i < 26; i++)
		printf("%d ", n[i]);
	return 0;
}