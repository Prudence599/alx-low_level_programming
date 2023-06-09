#include "main.h"
#include <stdio.h>

/**
 *_print_rev.c - prints a string a reverse form
 *
 * @s : The string to print
 * Return : 0 Always
 *
 */

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
