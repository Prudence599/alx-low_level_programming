#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 *_get_nodeint_at_index - Function that gets a node of list at specific index
 * @head: A pointer to listint_t structure
 * @index: The index of the node
 * Return: A pointer to node at specified index, or NULL if not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head)
	{
		while (head)
		{
			if (count == index)
				return (head);

			head = head->next;
			count++;
		}
	}

	return (NULL);
}
