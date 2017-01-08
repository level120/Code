#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int l, c;
vector<char> passwd;

void dfs( string&, int );
void check( string );

int main() {
	string password;
	scanf( "%d %d", &l, &c );

	for ( int i = 0; i < c; i++ ) {
		getchar();
		passwd.push_back( getchar() );
	}

	sort( passwd.begin(), passwd.end() );

	dfs( password, 0 );

	return 0;
}

void dfs( string& password, int begin ) {
	if ( password.length() == l ) {
		check( password );
		return;
	}

	for ( int next = begin; next < c; next++ ) {
		password.push_back( passwd[ next ] );
		dfs( password, next + 1 );
		password.pop_back();
	}
}

void check( string password ) {
	int len		= password.length();
	int count	= 0;
	
	for ( int i = 0; i < len; i++ ) {
		if ( password[ i ] == 'a' ||
			 password[ i ] == 'i' ||
			 password[ i ] == 'u' ||
			 password[ i ] == 'e' ||
			 password[ i ] == 'o' )
			++count;
	}

	if ( count < 1 || ( len - count ) < 2 )
		return;
	puts( password.c_str() );
}