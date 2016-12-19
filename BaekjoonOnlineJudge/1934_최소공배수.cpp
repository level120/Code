#include <iostream>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n1, n2, tmp1, tmp2;
		scanf("%d %d", &n1, &n2);
		if (n2 > n1) {
			tmp1 = n1;
			n1 = n2;
			n2 = tmp1;
		}
		tmp1 = n1;	tmp2 = n2;
		while (n2 != 0) {
			int temp = n1 % n2;
			n1 = n2;
			n2 = temp;
		}
		printf("%d\n", n1 * (tmp1 / n1)*(tmp2 / n1));
	}
	return 0;
}