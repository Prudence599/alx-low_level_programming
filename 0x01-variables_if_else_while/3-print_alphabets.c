#include <stdio.h>


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
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)

	putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)

	putchar(ch);

	putchar('\n');

	return (0);

}
