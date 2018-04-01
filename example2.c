#include <stdio.h>
#include <stdlib.h>

int main( int argc, char const *argv[] )
{
    // for (int i = 0; i < argc; ++i)
    //     printf( "%s\n", argv[ i ] );

    switch ( argv[2][0] ) {
        case '+':
            printf("Результат суммирования %d + %d = %d\n", atoi( argv[1] ), atoi( argv[3] ), atoi( argv[1] ) + atoi( argv[3] ) );
            break;
        case '-':
            printf("Результат вычитания %d - %d = %d\n", atoi( argv[1] ), atoi( argv[3] ), atoi( argv[1] ) - atoi( argv[3] ) );
            break;
        case '/':
            printf("Результат деления %d / %d = %5.2lf\n", atoi( argv[1] ), atoi( argv[3] ), (float)(atoi( argv[1] ) / atoi( argv[3] )) );
            break;
        case 'x':
            printf("Результат умножения %d x %d = %d\n", atoi( argv[1] ), atoi( argv[3] ), atoi( argv[1] ) * atoi( argv[3] ) );
            break;
        default:
            printf("Операция \'%s\' не реализована!\n", argv[2] );
            break;
    }

    return 0;
}