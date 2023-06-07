#include <stdio.h>
#include "lists.h"

/**
 * _print_listint.c_ - function that prints all the elements of a list.
 *
 *@h : pointer to listint structure
 *
 *Return: the number of nodes
 */


size_t print_listint(const listint_t *h)
	{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
