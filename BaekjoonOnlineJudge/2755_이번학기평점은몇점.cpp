#include <iostream>
#include <cstdio>
using namespace std;

float Plus[4] = { 4.3, 3.3, 2.3, 1.3 };
float Def[4] = { 4, 3, 2, 1 };
float Minus[4] = { 3.7, 2.7, 1.7, 0.7 };

int main() {
	int n, sum = 0;
	float sc = 0.0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		char tmp[101];
		int memo = -1;
		float temp;
		cin >> tmp >> temp;
		sum += temp;
		getchar();
		for (int i = 0; i < 2; i++) {
			char t = getchar();
			if (memo == -1 && t>64 && t < 69)	memo = t - 65;
			if (t == 70)	temp = 0;
			if (memo != -1 && t == '+')	temp = temp * Plus[memo];
			if (memo != -1 && t == '0')	temp = temp * Def[memo];
			if (memo != -1 && t == '-')	temp = temp * Minus[memo];
		}
		sc += temp;
	}
	printf("%.2f", sc / sum);
	return 0;
}