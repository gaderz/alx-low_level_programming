#include "lists.h"

/**
 * free_listint_safe - Frees a linked list
 * @head: Pointer to pointer to the head of the list
 *
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **head)
{
	size_t nodes_freed = 0;
	int diff;
	listint_t *temp;

	if (!head || !*head)
		return (0);

	while (*head)
	{
		diff = *head - (*head)->next;
		if (diff > 0)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
			nodes_freed++;
		}
		else
		{
			free(*head);
			*head = NULL;
			nodes_freed++;
			break;
		}
	}

	*head = NULL;

	return (nodes_freed);
}
