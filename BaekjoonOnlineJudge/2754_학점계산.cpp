#include <iostream>
#include <cstdio>
#pragma warning(disable:4996)
using namespace std;

float Plus[4] = { 4.3, 3.3, 2.3, 1.3 };
float Def[4] = { 4.0, 3.0, 2.0, 1.0 };
float Minus[4] = { 3.7, 2.7, 1.7, 0.7 };

int main() {
	int memo = -1;
	float sc = 0.0, temp;
	for (int i = 0; i < 2; i++) {
		char t = getchar();
		if (memo == -1 && t>64 && t < 69)	memo = t - 65;
		if (t == 70)	puts("0.0");
		if (memo != -1 && t == '+')	printf("%.1f", Plus[memo]);
		if (memo != -1 && t == '0')	printf("%.1f", Def[memo]);
		if (memo != -1 && t == '-')	printf("%.1f", Minus[memo]);
	}
	return 0;
}