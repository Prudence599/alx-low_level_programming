#include "main.h"
#include <stdio.h>

/**
 *_strlen.c - returns the length of a string
 *
 * Return : string length
 *
 */

int _strlen(char *s)
{
	int c = 0;
	
	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
