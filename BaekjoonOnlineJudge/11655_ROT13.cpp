#include <iostream>
#include <string>
using namespace std;

int main() {
	char rot_A[26];
	char rot_a[26];
	for (int i = 0; i < 26; i++)	rot_A[i] = 65 + i;
	for (int i = 0; i < 26; i++)	rot_a[i] = 97 + i;
	string temp;
	getline(cin, temp);
	for (int i = 0; i < temp.length(); i++) {
		if		(temp[i] > 64 && temp[i] < 91)	cout << rot_A[(temp[i] + 52) % 26];
		else if (temp[i] > 96 && temp[i] < 123)	cout << rot_a[(temp[i] + 72) % 26];
		else	cout << temp[i];
	}
}