#include <iostream>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	getchar();
	while (T--) {
		char N[2][21] = { '0' };
		char tmp;
		int count = 0;
		for (int i = 0; (tmp = getchar()) != ' '; i++) {
			N[0][i] = tmp;	count++;
		}
		for (int i = 0; (tmp = getchar()) != '\n'; i++)
			N[1][i] = tmp;
		printf("Distances: ");
		for (int i = 0; i<count; i++)
			printf("%d ", (N[0][i] <= N[1][i]) ? (N[1][i] - N[0][i]) : (N[1][i] - N[0][i]) + 26);
		puts("");
	}
	return 0;
}