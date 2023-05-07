#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - program that prints lower case alphabets followed by a new line.
*
*Author: Kosisochukwu Prudence Okey-Nwankwo
*
*Return : Always Success
*
**/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)

	{
		putchar(ch);

	}

	putchar('\n');

	return (0);
}
