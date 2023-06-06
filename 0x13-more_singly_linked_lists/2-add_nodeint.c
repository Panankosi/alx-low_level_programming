#include "lists.h"

/**
 * add_nodeint - function that add a new node at the beginning of a listint_t.
 * @head: double pointer to the head of a list.
 * @n: int to be added
 * Return: address of the node added
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!head || !newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head)
		newNode->next = *head;
	*head = newNode;
	return (newNode);
}
