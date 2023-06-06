#include "lists.h"

/**
 * listint_t - return the number of element
 * linked listint_list
 * @h: pointer to the head of list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	register size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
