#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

struct M {
	char name[11];
	int kor, eng, math;
};

bool comp(M a, M b){
	if (a.kor != b.kor) return a.kor > b.kor;
	if (a.eng != b.eng) return a.eng < b.eng;
	if (a.math != b.math) return a.math > b.math;
	for (int i = 0; i < strlen(a.name); i++)
		if (a.name[i] != b.name[i])	return a.name[i] < b.name[i];
}


int main() {
	int T, cnt = 0, tmp;
	scanf("%d", &T);
	M * member = new M[T];
	for (int i = 0; i < T; i++)
		scanf("%s %d %d %d", member[i].name, &member[i].kor, &member[i].eng, &member[i].math);
	sort(member, member + T, comp);
	for (int i = 0; i < T; i++)
		printf("%s\n", member[i].name);
	delete[] member;
	return 0;
}