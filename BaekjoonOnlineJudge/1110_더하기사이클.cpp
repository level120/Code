#include <iostream>
using namespace std;

int main() {
	int T, count = 0;
	scanf("%d", &T);
	int tmp1 = T / 10, tmp2 = T % 10;
	while (true) {
		count++;
		int result = tmp1 + tmp2;
		tmp1 = tmp2;	tmp2 = result % 10;
		if ((tmp1 * 10 + tmp2) == T)	break;
	}
	printf("%d", count);
	return 0;
}