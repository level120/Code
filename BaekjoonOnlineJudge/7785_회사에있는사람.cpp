#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	map<string, string> k;
	map<string, string>::iterator itr;
	while (n--) {
		string tmp1, tmp2;
		cin >> tmp1 >> tmp2;
		if (tmp2 == "enter")	k.insert(pair<string, string>(tmp1, tmp2));
		if (tmp2 == "leave")	k.erase((itr=k.find(tmp1)));
	}
	vector<string> ans(k.size());
	int i = 0;
	for (itr = k.begin(); itr != k.end(); itr++)
		ans[i++] = itr->first;
	sort(ans.begin(), ans.end());
	reverse(ans.begin(), ans.end());
	for (auto j : ans)
		cout << j<< '\n';
	return 0;
}