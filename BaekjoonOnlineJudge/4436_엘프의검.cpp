#include <iostream>
#include <string>
using namespace std;

#define LIMIT	100
typedef unsigned long long ll;

int find( ll n );

int main() {
	int res;
	ll n;

	while ( ~scanf("%llu", &n) )
		printf( "%d\n", find( n ) );
	
	return 0;
}

int find( ll n ) {
	bool numeric[ 10 ] = { false };
	int res = -1;

	for ( int i = 1; i < LIMIT; i++ ) {
		string num = to_string( n * i );
		int len = num.length();
		bool flag = true;

		for ( int j = 0; j < len; j++ ) {
			if ( !numeric[ num[ j ] - '0' ] )
				numeric[ num[ j ] - '0' ] = true;
		}

		for ( int j = 0; j < 10; j++ ) {
			if ( !numeric[ j ] ) {
				flag = false;
				break;
			}
		}

		if ( flag ) {
			res = i;
			break;
		}
	}

	return res;
}