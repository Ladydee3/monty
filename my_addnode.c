#include "monty.h"

/**
 * my_addnode - add node to the head stack
 * @head: head stack
 * @n: new_value
 * Return: Nothing
 */
void my_addnode(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
	exit(0); }
	if (aux)
	aux->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->next = NULL;
	*head = new_node;
}

