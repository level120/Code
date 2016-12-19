#include <iostream>
using namespace std;

unsigned long fibo[1024][2];

int main() {
	int input;
	cin >> input;
	fibo[0][0] = 1; fibo[0][1] = 0;
	fibo[1][0] = 0; fibo[1][1] = 1;
	while (input != 0) {
		int num;
		cin >> num;
		for (int i = 2; i <= num; i++) {
			for (int j = 0; j < 2; j++)
				fibo[i][j] = fibo[i - 1][j] + fibo[i - 2][j];
		}
		cout << fibo[num][0] << " " << fibo[num][1] << endl;
		input--;
	}
}