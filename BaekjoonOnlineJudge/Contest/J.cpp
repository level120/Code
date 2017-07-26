#include <cstdio>
typedef long long int ll;
ll f( ll a, ll b ) {
	ll n;
	while ( 1 ) {
		n = a%b;
		if ( !n )	break;
		a = b;
		b = n;
	}
	return b;
}

int main() {
	ll n, ans = 1;
	scanf( "%lld", &n );
	
	for ( int i = 2; i < n + 1; i++ ) {
		ans = ans * i / f( ans, i );
	}
	printf( "%lld", ans );
	return 0;
}