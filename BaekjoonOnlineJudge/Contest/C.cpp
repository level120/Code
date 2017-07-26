#include <cstdio>

int main() {
	char c;
	bool f = false, r = true;
	while ( ( c = getchar() ) != EOF ) {
		if ( c < 'a' || c > 'z' ) r = true;
		else if ( c == '_' || c == ' ' ) {
			f = true;
		}
		else if ( f&&c >= 'a'&&c <= 'z' ) {
			c ^= 32; f = false;
		}
		else if ( r&&c >= 'a'&&c <= 'z' ) {
			r = false; c ^= 32;
		}
		putchar( c );
	}
	return 0;
}