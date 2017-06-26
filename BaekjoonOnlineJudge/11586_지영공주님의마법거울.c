#include <stdio.h>

int n, k;
char m[ 101 ][ 101 ];

void print();

int main()
{
	scanf( "%d ", &n );

	for ( int i = 0; i < n; i++ )
	{
		for ( int j = 0; j < n; j++ )
			scanf( "%c", &m[ i ][ j ] );
		getchar();
	}
	scanf( "%d", &k );

	print();
	return 0;
}

void print()
{
	if ( k == 1 )
	{
		for ( int i = 0; i < n; i++ )
		{
			for ( int j = 0; j < n; j++ )
				printf( "%c", m[ i ][ j ] );
			puts( "" );
		}
	}

	else if ( k == 2 )
	{
		for ( int i = 0; i < n; i++ )
		{
			for ( int j = ( n - 1 ); j >= 0; j-- )
				printf( "%c", m[ i ][ j ] );
			puts( "" );
		}
	}

	else
	{
		for ( int i = ( n - 1 ); i >= 0; i-- )
		{
			for ( int j = 0; j < n; j++ )
				printf( "%c", m[ i ][ j ] );
			puts( "" );
		}
	}
}