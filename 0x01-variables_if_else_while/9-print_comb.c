#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints all possible combinations of single digit number
 * Return: 0 (success)
 */
int main(void)
{
	int m;

	for (m = 0; m < 10; m++)

	{
		putchar(m + '0');

		if (m < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
		return (0);
}
