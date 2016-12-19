#include <iostream>
#include <string>
using namespace std;

int main() {
	char tmp;
	while (~(tmp = getchar())) {
		int cnt[4] = { 0 };
		string temp, temp2;
		getline(cin, temp2);
		temp = tmp + temp2;
		for (int i = 0; i < temp.size(); i++) {
			if (temp[i] > 96 && temp[i] < 123)	cnt[0]++;
			if (temp[i] > 64 && temp[i] < 91)	cnt[1]++;
			if (temp[i] > 47 && temp[i] < 58)	cnt[2]++;
			if (temp[i] == 32)	cnt[3]++;
		}
		for (int i = 0; i < 4; i++)
			cout << cnt[i] << " ";
		cout << endl;
	}
	return 0;
}