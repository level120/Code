#include <iostream>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int a, b, result = 1;
		scanf("%d %d", &a, &b);
		if (a % 10 == 0)	printf("10\n");
		else {
			for (int i = 0; i < b; i++) {
				result = (result * a) % 10;
			}
			printf("%d\n", result);
		}
	}
	return 0;
}