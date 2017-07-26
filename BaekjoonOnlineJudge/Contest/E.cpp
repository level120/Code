#include <cstdio>
#include <cstring>

struct N {
	char s[ 11 ];
	int p;
	int g;
};

N tmp[ 10001 ];

void sort1( N a[], int lim ) {
	for ( int i = 0; i < lim; i++ ) {
		for ( int j = 0; j < lim; j++ ) {
			if ( a[ i ].p > a[ j ].p ) {
				a[ i ].g++;
			}
		}
	}
}

int main() {
	int n1, n2;
	scanf( "%d %d", &n1, &n2 );
	for ( int i = 0; i < n2; i++ ) {
		scanf( "%s %d", tmp[ i ].s, &tmp[ i ].p );
	}
	sort1( tmp, n2 );
	for ( int i = 0; i < n2; i++ )
	{
		if ( tmp[ i ].g >= ( n2 - n1 ) )
			printf( "%s\n", tmp[ i ].s );
	}
	return 0;
}