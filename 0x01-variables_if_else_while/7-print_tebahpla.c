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
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
		putchar('\n');
	}
return (0);
}
