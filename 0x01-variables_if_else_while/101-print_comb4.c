#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - program that prints all possible combination of three digits.
*description: the numbers should be arranged in ascending order
*
*Author: Kosisochukwu Prudence Okey-Nwankwo
*
*Return : Always Success
*
**/

int main(void)
{
	int d1, d2, d3;

	for (d1 = '0'; d1 <= '7'; d1++)
	{
	for (d2 = d1 + 1; d2 <= '8'; d2++)
	{
	for (d3 = d2 + 1; d3 <= '9'; d3++)
	{
		putchar((d1 % 10) + '0');
		putchar((d2 % 10) + '0');
		putchar((d3 % 10) + '0');

		if (d1 == '7' && d2 == '8' && d3 == '9')
			continue;
	}
	}
	}

	{
		putchar(',');
		putchar(' ');
	}
		putchar('\n');

return (0);
}
