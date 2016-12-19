#include <cstdio>
#include <cstdlib>
#include <ctime>
int main() {
	srand(time(NULL));
	int r = rand() % 2;
	for (int i = 0; i < 150000000; i++) if (false)	i;
	r ? puts("Yonsei") : puts("Korea");
	return 0;
}