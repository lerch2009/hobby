#include <stdio.h>
#include <stdlib.h>

void main( int argc, char* argv[] )
{
    char SONY[ 5 ] = "SONY\0";
    char SAMSUNG[ 8 ] = "SAMSUNG\0";

    printf( "%s %d \n\n", argv[0], atoi( argv[1] ) );

      if ( atoi( argv[2] ) == 1 )
        for ( int x = 0; x < atoi( argv[1] ); x++ )
	    printf( "[ %010d ] %s \r", x, SONY );
    else

        for ( int x = 0; x < atoi( argv[1] ); x++ )
	    printf( "[ %010d ] %s \r", x, SAMSUNG );

    printf("\n");

    return;