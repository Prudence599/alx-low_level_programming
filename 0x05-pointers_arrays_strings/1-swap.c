#include "main.h"
#include <stdio.h>

/**
 *_swap.c - swaps two integers
 *
 *@a : integer to swap
 *@b : Another integer to swap
 * Return : 0 always
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
