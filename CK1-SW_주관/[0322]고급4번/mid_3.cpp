#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long int ll;
#pragma warning(disable:4996)

int main() {
	freopen("data.txt", "r", stdin);

	vector<ll> arr;
	int n;
	ll tmp, sum = 0;
	scanf("%d", &n);
	while (scanf("%lld", &tmp) != EOF) {
		sum += tmp;
		arr.push_back(tmp);
	}

	double ans = (double)sum / n;
	sort(arr.begin(), arr.end());

	printf("%.3lf\n", ans>(double)arr[n/2] ? ans - (double)arr[n/2] : (double)arr[n/2] - ans);
	return 0;
}