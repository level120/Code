#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string sort_inside( string n );

int main() {
	string n;
	cin >> n;
	cout << sort_inside( n );
	return 0;
}

string sort_inside( string n ) {
	sort( n.begin(), n.end() );
	reverse( n.begin(), n.end() );
	return n;
}