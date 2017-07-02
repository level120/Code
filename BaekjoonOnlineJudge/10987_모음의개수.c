#include <stdio.h>

int main() {
	char c;
	int ans = 0;
	while ( ( c = getchar() ) != EOF ) {
		if ( c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' )
			ans++;
	}
	printf( "%d", ans );
	return 0;
}