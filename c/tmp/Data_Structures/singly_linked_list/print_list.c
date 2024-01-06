#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to head node
 *
 * Return: count
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *tmp;

	tmp = h;
	if (tmp == NULL)
		return (0);

	while (tmp != NULL)
	{
		if (tmp->str == NULL)
			printf("[%d]%s\n", 0, "(nill)");
		else
			printf("[%u]%s\n", tmp->len, tmp->str);

		tmp = tmp->next;
		count++;
	}

	return (count);
}
