#include <cstdio>
#include <string>

int main() {
	char c;
	bool f = false;
	while ( (c = getchar()) != '}' ) {
		if ( c == '\"' ) {
			if ( f ) f = false; else f = true;
		}
		else if ( f ) {
			printf("%c", c);
		}
		else if ( c == ':' ) {
			printf(" ");
		}
		else if ( c == ',' ) {
			printf("\n");
		}
	}
	return 0;
}