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
putchar(c);
}

while
(c != 'q' && c != 'e')
{
putchar(c);
}

return (0);
}
