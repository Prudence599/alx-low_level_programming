#include <stdio.h>

/**
*main - C programme that prints Size of various types on the computer
*
*Author : Kosisochukwu Prudence Okey-Nwankwo
*
*Return: Always success
*
**/

int main(void)
{
char charType;
int intType;
float floatType;
double doubleType;

/*C program that prints Size of types with the return value 0 */

printf("size of char: %lubytes\n", sizeof(charType));
printf("size of int: %lubytes\n", sizeof(intType));
printf("size of float: %lubytes\n", sizeof(floatType));
printf("size of double: %lubytes\n", sizeof(doubleType));

return (0);
}
