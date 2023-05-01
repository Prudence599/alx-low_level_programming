#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - program that prints all possible combination of two two-digit numbers.
*description: the numbers should be arranged in ascending order
*The numbers shoupd range from 0-99
*The numbers should be separated by a space
*All numbers shold be printed with two digits
*The comination of numbers must be separated by a comma, followed by a space
*
*Author: Kosisochukwu Prudence Okey-Nwankwo
*
*Return : Always Success
*
**/

int main(void)
{
	int d1, d2;

	for (d1 = 0; d1 <= 98; d1++)
	{
	for (d2 = d1 + 1; d2 <= 99; d2++)
	{
		putchar((d1 / 10) + '0');
		putchar((d1 % 10) + '0');

		putchar(' ');

		putchar((d2 / 10) + '0');
		putchar((d2 % 10) + '0');

		if (d1 == 98 && d2 == 99)
			continue;

		putchar(',');
		putchar(' ');
	}
	}

	putchar('\n');


	return (0);
}
