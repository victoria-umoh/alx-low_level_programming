#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10
	printf("Last digit of %d ", n, x);
	if (x > 5)
	{
		printf("and is greater than 5")
	}
	if (x == 0)
	{
		print("and is 0")
	}
	if (x < 6 && != 0)
	{
		print("and is less than 6 and not 0");
	}
	print("\n");
	return (0);
}
