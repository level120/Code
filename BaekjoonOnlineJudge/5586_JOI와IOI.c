#include <stdio.h>
#include <string.h>

char str[ 10001 ];

int main() {
	int joi = 0, ioi = 0, len;
	char s_joi[] = "JOI", s_ioi[] = "IOI";
	fgets( str, 100001, stdin );
	len = strlen( str ) - 3;
	for ( int i = 0; i < len; i++ ) {
		char tmp[ 4 ];
		strncpy( tmp, str + i, 3 );
		tmp[ 3 ] = '\0';
		if ( !strcmp( tmp, s_joi ) ) joi++;
		if ( !strcmp( tmp, s_ioi ) ) ioi++;
	}
	printf( "%d\n%d", joi, ioi );
	return 0;
}