#include "main.h"
#include <stdio.h>

/**
 *_print_array.c - prints n elements of an array of integers
 *@n : the number of elements of the array  to be printed
 *
 * Return : 0 Always
 *
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
