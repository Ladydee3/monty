#include "monty.h"

/**
 * f_my_pall - print stack
 * @counter: no used
 * @head: stack head
 * Return: nothing
 */
void f_my_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
	return;
	while (h)
	{
	printf("%d\n", h->n);
	h = h->next;
	}
}
