#include "main.h"

/**
*print_alphabet_x10 - program that prints 10x lowercase alphabets
*
*Return : Always 0
*
*/

void print_alphabet_x10(void)
{

char c;
int times = 0;

while (times++ <= 9)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
_putchar('\n');
}
}

}
