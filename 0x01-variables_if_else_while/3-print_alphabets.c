#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main - this program prints the alphabets in lowercase and in uppercase
 * Return:0 (success)
 */
int Main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');

	return (0);
}
