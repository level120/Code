#include <stdio.h>
#include <string.h>

typedef struct data {
	char str[ 14 ];
	char rev[ 14 ];
	int len;
} Data;

int ptr;
char *ans;
Data tmp[ 100 ];

void run();
void search();
char *strrev( char *str ) {
	char *p1, *p2;

	if ( !str || !*str )
		return str;

	for ( p1 = str, p2 = str + strlen( str ) - 1; p2 > p1; ++p1, --p2 )	{
		*p1 ^= *p2;
		*p2 ^= *p1;
		*p1 ^= *p2;
	}
	return str;
}

int main() {
	int n;
	scanf( "%d", &n );
	while ( n-- ) { run(); }
	search();
	printf( "%d %c", strlen( ans ), ans[ strlen( ans ) / 2 ] );
	return 0;
}

void run() {
	scanf( "%s", tmp[ ptr ].str );
	strcpy( tmp[ ptr ].rev, tmp[ ptr ].str );
	strrev( tmp[ ptr ].rev );
	tmp[ ptr ].len = strlen( tmp[ ptr++ ].str );
}

void search() {
	for ( int i = 0; i < ptr; i++ ) {
		int flag = 0;
		for ( int j = 0; j < ptr; j++ ) {
			if ( !strcmp( tmp[ i ].str, tmp[ j ].rev ) ) {
				flag = 1;
				ans = tmp[ i ].str;
			}
		}
		if ( flag ) break;
	}
}