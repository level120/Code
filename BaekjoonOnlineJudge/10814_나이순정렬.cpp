#include <iostream>
#include <algorithm>

struct M {
	char name[101];
	int reg;
};

bool comp(const M &a, const M &b){
	if (a.reg != b.reg) return a.reg < b.reg;
	return false;
}

int main() {
	int T;
	scanf("%d", &T);
	M * member = new M[T];
	for (int i = 0; i < T; i++)
		scanf("%d %s", &member[i].reg, member[i].name);
	std::stable_sort(member, member + T, comp);
	for (int i = 0; i < T; i++)
		printf("%d %s\n", member[i].reg, member[i].name);
	delete[] member;
	return 0;
}