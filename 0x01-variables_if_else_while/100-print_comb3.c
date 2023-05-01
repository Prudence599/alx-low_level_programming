#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - program that prints all possible combination of two different digits.
*
*Author: Kosisochukwu Prudence Okey-Nwankwo
*
*Return : Always Success
*
**/

int main(void)
{
	int d1, d2;

	for (d1 = '0'; d1 <= '8'; d1++)
	{
	for (d2 = d1 + 1; d2 <= '9'; d2++)
	{
		putchar((d1 % 10) + '0');
		putchar((d2 % 10) + '0');
		if (d1 == '8' && d2 == '9')
		continue;
	}
	}

	{
		putchar(',');
		putchar(' ');
	}
		putchar('\n');

return (0);
}
