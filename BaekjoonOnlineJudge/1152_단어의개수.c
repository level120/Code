#include <stdio.h>
char tmp[ 1000001 ];
int main() {
	int ans = 0;
	while ( ~scanf("%s", tmp) ) {
		ans++;
	}
	printf( "%d", ans );
	return 0;
}