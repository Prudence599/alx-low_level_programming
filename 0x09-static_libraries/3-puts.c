#include "main.h"
#include <stdio.h>

/**
 *_puts.c - function that prints a string
 *
 * Return : 0 always
 *
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
