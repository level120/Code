#include <stdio.h>

int main() {
	int n[9], total = 0, without[2];
	for ( int i = 0; i < 9; i++ ) {
		scanf( "%d", &n[i] );
		total += n[ i ];
	}
	total -= 100;
	for ( int i = 0; i < 8; i++ ) {
		for ( int j = i + 1; j < 9; j++ ) {
			if ( n[ i ] + n[ j ] == total ) {
				without[ 0 ] = i;
				without[ 1 ] = j;
			}
		}
	}
	for ( int i = 0; i < 9; i++ ) {
		if ( i == without[ 0 ] || i == without[ 1 ] )
			continue;
		printf( "%d\n", n[ i ] );
	}
	return 0;
}