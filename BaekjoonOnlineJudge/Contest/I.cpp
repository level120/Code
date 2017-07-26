#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string in, s, a, b;
	cin >> in;
	int idx;
	for ( int i = 0, lim = in.length(); i < lim; i++ ) {
		if ( in[ i ] > 47 && in[ i ] < 58 ) {
			s += in[ i ];
		}
		if ( in[ i ] == '+' || in[ i ] == '-' || in[ i ] == '*' || in[ i ] == '/' ) {
			s += in[ i ];
		}
	}
	for ( int i = 0, lim = s.length(); i < lim; i++ ) {
		if ( s[ i ] == '+' || s[ i ] == '-' || s[ i ] == '*' || s[ i ] == '/' ) {
			idx = i;
		}
	}
	a = s.substr( 0, idx );
	b = s.substr( idx + 1, s.length() - idx );

	if ( s[ idx ] == '+' )
		cout << atoi( a.c_str() ) + atoi( b.c_str() );
	if ( s[ idx ] == '-' )
		cout << atoi( a.c_str() ) - atoi( b.c_str() );
	if ( s[ idx ] == '*' )
		cout << atoi( a.c_str() ) * atoi( b.c_str() );
	if ( s[ idx ] == '/' )
		cout << atoi( a.c_str() ) / atoi( b.c_str() );

	/*cout << in << endl << s << endl;
	cout << a << endl << idx << endl << b << endl;*/
	return 0;
}