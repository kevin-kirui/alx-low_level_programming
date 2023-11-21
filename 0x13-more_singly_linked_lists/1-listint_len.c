#include <stdio.h>
#include "lists.h"

/**
  * listint_len - Counts elements in linked list
  * @h: Linked list head
  *
  * Return: Number of elements in a linked list
  */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			count++;
		}
	}

	return (count);
}
