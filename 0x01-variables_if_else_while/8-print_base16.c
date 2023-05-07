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
	int n;

	char ch;

	for (n = 48; n < 58; n++)

	{

		putchar(n);

	}

	for (ch = 'a'; ch <= 'f'; ch++)

	{
		putchar(ch);

	}

	putchar('\n');

	return (0);

}
