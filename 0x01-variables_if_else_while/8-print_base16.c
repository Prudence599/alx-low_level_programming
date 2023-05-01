#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - program that prints lowercase alphabets in reverse order.
*
*Author: Kosisochukwu Prudence Okey-Nwankwo
*
*Return : Always Success
*
**/

int main(void)
{
	int d;
	char c;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
		putchar('\n');
	}

return (0);
}
