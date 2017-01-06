#include <iostream>
#include <string>
using namespace std;

int check( string word );

int main() {
	int n, res = 0;
	string word;

	cin >> n;

	while ( n-- ) {
		cin >> word;
		res += check( word );
	}
	cout << res;
	return 0;
}

int check( string word ) {
	bool alph[ 28 ] = { false };
	int len = word.length();
	int res = 1;
	char temp = 0;

	for ( int i = 0; i < len; i++ ) {
		if ( word[ i ] != temp && !alph[ word[ i ] - 97 ] ) {
			alph[ word[ i ] - 97 ] = true;
			temp = word[ i ];
		}
		else if ( word[ i ] != temp && alph[ word[ i ] - 97 ] ) {
			res = 0;
			break;
		}
	}
	return res;
}