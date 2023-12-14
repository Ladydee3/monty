#include "monty.h"

/**
 * f_my_pstr - string stsrting at the top of the stack printed
 * @counter: line_number
 * @head: stack head
 * Return: Nothing
 */
void f_my_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
	if (h->n > 127 || h->n <= 0)
	{
	break;
	}
	printf("%c", h->n);
	h = h->next;
	}
	printf("\n");
}
