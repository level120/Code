#include <iostream>
#include <string>

#define SIZE 8
using namespace std;

string check( string ipv6 );
string convert( string ipv6 );

int main() {
	string ipv6;
	cin >> ipv6;
	cout << check( ipv6 ) << "\n";
	return 0;
}

string convert( string ipv6 ) {
	if ( ipv6.length() == 39 )
		return ipv6;
	else
		return convert( ipv6 );
}

string check( string ipv6 ) {
	string res = "", container[ SIZE ];
	bool flag = false;
	int splitor = 0;

	for ( int i = 0, len = ipv6.length(); i < len; i++ ) {
		if ( ipv6[ i ] == ':' )
			splitor++;
	}

	if ( splitor < 7 )	flag = true;

	for ( int i = 0, idx = 0, len = ipv6.length(); i < len; i++ ) {
		if ( ipv6[ i ] == ':' ) {
			if ( ipv6[ i + 1 ] == ':' && flag ) {
				idx++; flag = false;
			}
			idx++;
		}
		else {
			container[ idx ] += ipv6[ i ];
		}
	}

	for ( int i = 0; i < SIZE; i++ ) {
		for ( int j = 0, len = ( 4 - container[ i ].length() ); j < len; j++ ) {
			res += "0";
		}
		res += container[ i ];
		if ( i != ( SIZE - 1 ) )	res += ":";
	}

	return res;
}