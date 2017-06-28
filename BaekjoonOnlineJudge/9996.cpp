#include <iostream>
#include <string>
using namespace std;

string patten;
string token1, token2;
void result( int n );

int main() {
	int n;
	cin >> n >> patten;
	result( n );
	return 0;
}

void result( int n ) {
	int ptr = patten.find( '*' );
	token1 = patten.substr( 0, ptr );
	token2 = patten.substr( ptr + 1, patten.size() );

	for ( int i = 0; i < n; i++ ) {
		string tmp;
		cin >> tmp;

		if ( tmp.size() < patten.size() - 1 ) {
			cout << "NE\n";
			continue;
		}

		if ( tmp.substr( 0, token1.size() ) == token1 &&
			tmp.substr( tmp.size() - token2.size(), token2.size() ) == token2 )
			cout << "DA\n";
		else
			cout << "NE\n";
	}
}