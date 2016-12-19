#include <cstdio>
int n[10001];
int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        int t;
        scanf("%d", &t);
        n[t] += 1;
    }
    for (int i = 1; i <= 10000; i++) {
        if(n[i]>0) {
            for(int j=0; j<n[i]; j++)    printf("%d\n", i);
        }
    }
    return 0;
}


// 아래 코드는 MLE 판정

#include <cstdio>
#include <iostream>
#include <set>
using namespace std;

int main() {
	int n;
	multiset<int> k;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int t;
		scanf("%d", &t);
		k.insert(t);
	}
	for (auto i : k)	printf("%d\n", i);
	return 0;
}