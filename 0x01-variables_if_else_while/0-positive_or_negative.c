#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this program assigns a random number to the variable n
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int RAND;
	int MAX;

	srand(time(0));
	n = rand() - RAND = MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
