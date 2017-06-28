#include <stdio.h>
#define max(a, b) (((a) > (b)) ? (a) : (b))

int a[ 26 ], m, o, _p;

int main(c) {
	while ( (c = getchar()) != 26 ) {
		int p = ( c > 96 ) ? ( c ^ 32 ) - 65 : c - 65;
		a[ p ]++;
		_p = ( a[ _p ] < a[ p ] ? p : _p );
		m = max( m, a[ p ] );
	}
	for ( int i = 0; i < 26; i++ )
		if ( a[ i ] == m ) o++;
	printf( "%c", o>1 ? '?' : _p + 65 );
	return 0;
}