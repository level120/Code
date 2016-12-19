#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int Month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
char Month2[12][10] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

int main() {
	char month[10];
	int d, y, h, m;
	scanf("%s %d, %d %d:%d", month, &d, &y, &h, &m);
	int tmp = 0, total = 525600;
	bool chk = false;
	if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))	{
		total += 1440;	chk = true;
	}
	for (int i = 0; strcmp(month, Month2[i]); i++) {
		if (i == 1 && chk)	tmp += 29;
		else tmp += Month[i];
	}
	int ans = ((tmp + d) * 1440) + (h * 60) + m -1440;
	printf("%.10lf", ((double)ans / total) * 100);
	return 0;
}