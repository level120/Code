#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	char n[26] = { 0 };
	char temp;
	while (~(temp = getchar())) n[temp - 97]++;
	for (int i = 0; i < 26; i++)
		printf("%d ", n[i]);
	return 0;
}