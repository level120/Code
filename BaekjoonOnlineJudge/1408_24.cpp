#include <cstdio>
using namespace std;

struct time{
	int h, m, s;
}Time[3];

int main() {
	for (int k = 0; k < 2; k++)	scanf("%d:%d:%d", &Time[k].h, &Time[k].m, &Time[k].s);
	Time[1].s > Time[0].s ? Time[2].s = Time[1].s - Time[0].s : Time[2].s = 60 - Time[0].s + Time[1].s; if (Time[1].s < Time[0].s)	Time[0].m += 1;		if (Time[2].s == 60) Time[2].s = 0;
	Time[1].m > Time[0].m ? Time[2].m = Time[1].m - Time[0].m : Time[2].m = 60 - Time[0].m + Time[1].m; if (Time[1].m < Time[0].m)	Time[0].h += 1;		if (Time[2].m == 60) Time[2].m = 0;
	Time[2].h = Time[1].h - Time[0].h;	if (Time[2].h < 0)	Time[2].h += 24;
	printf("%02d:%02d:%02d\n", Time[2].h, Time[2].m, Time[2].s);
	return 0;
}