#include <iostream>
#include <string>
using namespace std;

int main() {
	int input, i = 0;
	cin >> input;
	getchar();
	while (input != 0) {
		string str;
		getline(cin, str);
		i++;
		cout << i << ". " << str << endl;
		input--;
	}
	return 0;
}