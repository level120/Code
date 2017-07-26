#include <cstdio>
int hero[ 10 ] = { 8, 11, 15, 16, 80, 81, 88, 90, 91, 92 };

int main() {
	int a = 0;
	for ( int i = 0, tmp; i < 6; i++ ) {
		scanf( "%d", &tmp );
		a += hero[ tmp - 1 ];
	}
	printf( "%.2f", ( float )a / 6.0f );
	return 0;
}