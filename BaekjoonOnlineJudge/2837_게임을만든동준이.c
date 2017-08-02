#include <stdio.h>

int lv[ 101 ];

int main() {
	int n, ans = 0;
	scanf( "%d", &n );

	for ( int i = 0; i < n; i++ ) {
		scanf( "%d", &lv[i] );
		for ( int j = 0; j < i; j++ ) {
			if ( lv[ j ] >= lv[ j + 1 ] ) {
				ans++;
				lv[ j ]--;
				j = -1;
			}
		}
	}

	printf( "%d", ans );
	return 0;
}