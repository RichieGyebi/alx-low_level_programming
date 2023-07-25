#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program to generate random valid passwords
 * Return: Always 0
 */

int main(void)
{
	int paswd[100];
	int x, sum, y;

	sum = 0;

	srand(time(NULL));

	for (x = 0; x < 100; x++)
	{
	paswd[x] = rand() % 78;
	sum += (paswd[x] + '0');
	putchar(paswd[x] + '0');

	if ((2772 - sum) - '0' < 78)
	{
		y = 2772 - sum - '0';
		sum += y;
		putchar(y + '0');
		break;
	}
	}

	return (0);
}
