#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this program prints the alphabets in lowercase and in uppercase
 * Return:0 (success)
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	for (lc = 'A'; lc <= 'Z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');

	return (0);
}
