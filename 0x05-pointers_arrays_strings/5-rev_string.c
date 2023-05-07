#include "main.h"
#include <stdio.h>

/**
 *_rev_string.c - reverses a string
 *
 * Returns : 0 always
 *
 */

void rev_string(char *s)
{
	int i, c, k;
	char *a, aux;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}

	for (k = 1; k < c; k++)
	{
		a++;
	}

	for (i = 0; i < (c / 2); i++)
	{
		aux = s[1];
		s[i] = *a;
		*a = aux;
		a--;
	}
}


