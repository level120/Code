#include <iostream>
using namespace std;

int comp(const void * n1, const void * n2);

int main() {
	int input, result = 1, num[51];
	cin >> input;
	for (int i = 0; i < input; i++)
		cin >> num[i];
	qsort(num, input, sizeof(num[0]), comp);
	result = num[0] * num[input - 1];
	cout << result << endl;
	return 0;
}

int comp(const void * n1, const void * n2) {
	return *(int *)n1 > *(int *)n2 ? 1 : *(int *)n1 < *(int *)n2 ? -1 : 0;
}