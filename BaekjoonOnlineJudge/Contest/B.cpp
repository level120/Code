#include <stdio.h>

int main() {
	long long int a, c;
	char b;
	scanf( "%lld %c %lld", &a, &b, &c );

	if ( b == '+' )	printf( "%lld", a + c );
	if ( b == '-' )	printf( "%lld", a - c );
	if ( b == '*' )	printf( "%lld", a * c );
	if ( b == '/' )	printf( "%.2lf", (double)a / c );
	return 0;
}