#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> n;
	for (int i = 0; i < 9; i++)	{
		int tmp;
		cin >> tmp;
		n.push_back(tmp);
	}
	cout << *max_element(n.begin(), n.end()) << endl;
	cout << max_element(n.begin(), n.end()) - n.begin() + 1 << endl;
	return 0;
}