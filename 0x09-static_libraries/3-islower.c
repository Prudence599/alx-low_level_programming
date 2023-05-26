#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
*_islower - program that checks for lowercase alphabets
*
*Return :1 if character is lowercase and 0 if otherwise
*
*/

int _islower(int c)
{

	if (c >= 'a' && c <='z')

		return (1);
	else
		return (0);
}
