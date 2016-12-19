#include <cstdio>
#include <algorithm>

int main() {
	char k[3];
	int ans[3], tmp[3];
	for (int i = 0; i < 3; i++)	
		scanf("%d", &tmp[i]);
	std::sort(tmp, tmp + 3);
	getchar();
	for (int i = 0; i < 3; i++)	k[i] = getchar();
	for (int i = 0; i < 3; i++)
		k[i] == 65 ? ans[i] = tmp[0] : k[i] == 66 ? ans[i] = tmp[1] : ans[i] = tmp[2];
	for (int i : ans)	printf("%d ", i);
	return 0;
}