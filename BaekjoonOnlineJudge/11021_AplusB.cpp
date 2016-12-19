#include <iostream>
using namespace std;

int main() {
	int input, i = 1;
	cin >> input;
	while (input != 0) {
		int num1, num2;
		cin >> num1 >> num2;
		cout << "Case #" << i << ": " << num1 + num2 << endl;
		i++;
		input--;
	}
	return 0;
}