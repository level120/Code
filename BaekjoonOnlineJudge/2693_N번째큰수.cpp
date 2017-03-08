#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int A[10];
		for (int i = 0; i < 10; i++)
			scanf("%d", &A[i]);
		sort(A, A + 10);
		printf("%d\n", A[7]);
	}
	return 0;
}