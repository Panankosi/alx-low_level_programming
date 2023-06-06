#include "lists.h"

/**
 * add_nodeint_end - function that add a new node at end of listint_t list.
 * @head: double pointer to head
 * @n: int to be added
 * Return: address of node added
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *current;

	if (!head || !newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (!*head)
		*head = newNode;
	else
	{
		current = *head;
		while (current->next)
			current = current->next;
		current->next = newNode;
	}
	return (newNode);
}
