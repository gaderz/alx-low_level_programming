#include "lists.h"

/**
 * free_listint_safe - Frees a linked list
 * @h: Pointer to pointer to the head of the list
 *
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *temp;

	if (h == NULL || *h == NULL)
		return (count);

	current = *h;
	while (current != NULL)
	{
		count++;
		temp = current;
		current = current->next;

		if (temp <= current)
		{
			free(temp);
			continue;
		}

		free(temp);
		break;
	}

	*h = NULL;
	return (count);
}
