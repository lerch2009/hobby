include <idio.h>
{
	/* code */
}
//int main(int argc, char const *argv[])
{
	// long int x = 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 * 10;

	long x = 1;

	for (int i = 1; i <= 10; ++i)
	{
		x *= i;
		printf("%07lu * %d\n", x, i );
	}


	return 0;
}