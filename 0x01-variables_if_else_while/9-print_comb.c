#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - program that prints possible combination of single digits.
*
*Author: Kosisochukwu Prudence Okey-Nwankwo
*
*Return : Always Success
*
**/

int main(void)
{
	int d;

	for (d = 47; d <= 57; d++)
	{
		putchar(d);

		if (d == 57)
			continue;

		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
