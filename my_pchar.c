#include "monty.h"

/**
 * f_my_pchar - char printed  at the top of the staack,
 * followed by new line
 * @head: stack head
 * @counter: line_number
 * Return: Nothing
 */
void f_my_pchar(stack_t **head, unsigned int counter)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
	fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
	fclose(bus.file);
	free(bus.content);
	free_stack(*head);
	exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
	fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
	fclose(bus.file);
	free(bus.content);
	free_stack(*head);
	exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
