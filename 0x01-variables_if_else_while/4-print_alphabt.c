#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - program that prints lower case alphabets.
*Description:two characters shoukdbbe excluded followed by a new line.
*
*Author: Kosisochukwu Prudence Okey-Nwankwo
*
*Return : Always Success
*
**/

int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)

{
if (c != 'q' && c != 'e')
putchar(c);
}
putchar('\n');
return (0);
}
