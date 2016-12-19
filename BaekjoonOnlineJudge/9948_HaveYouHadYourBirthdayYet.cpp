#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

char Month[12][10] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

int main() {
	while (1) {
		char month[10];
		int d;
		scanf("%d %s", &d, month);
		if (d == 0 && !strcmp(month, "#"))	break;
		if (d == 4 && !strcmp(month, "August")) {
			puts("Happy birthday");
			continue;
		}
		if (d == 29 && !strcmp(month, "February")) {
			puts("Unlucky");
			continue;
		}
		for (int i = 0; i < 12; i++) {
			if (i == 7 && !strcmp(month, "August"))	{
				if (d<4)	puts("Yes");
				else		puts("No");
			}
			if (i < 7 && !strcmp(month, Month[i]))	puts("Yes");
			if (i > 7 && !strcmp(month, Month[i]))	puts("No");
		}
	}
	return 0;
}