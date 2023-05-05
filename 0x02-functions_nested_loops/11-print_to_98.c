#include "main.h"

/**
 *_print_to_98.c - prints all matural numbers up to 98.
 *
 * Return : success Always
 *
 */

void print_to_98(int n)
{
	n >= 0;
	
	while(n <= 98)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');

}
