#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *curr, *check;

	curr = head;
	while (curr)
	{
		printf("[%p] %d\n", (void *)curr, curr->n);
		count++;
		curr = curr->next;
		if (curr >= check)
		{
			printf("-> [%p] %d\n", (void *)curr, curr->n);
			break;
		}
		check = curr;
	}

	return (count);
}
