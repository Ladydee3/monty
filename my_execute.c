#include "monty.h"

/**
 * execute - execute opcode
 * @stack: head linked list stack
 * @file: monty file pointer
 * @content: line content
 * @counter: line counter
 * Return: Nothing
 */
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
		{"push", f_my_push}, {"pall", f_my_pall}, {"pint", f_my_pint},
		{"pop", f_my_pop},
		{"swap", f_my_swap},
		{"add", f_my_add},
		{"nop", f_my_nop},
		{"sub", f_my_sub},
		{"div", f_my_div},
		{"mul", f_my_mul},
		{"mod", f_my_mod},
		{"pchar", f_my_pchar},
		{"pstr", f_my_pstr},
		{"rotl", f_my_rotl},
		{"rotr", f_my_rotr},
		{"queue", f_my_queue},
		{"stack", f_my_stack},
		{NULL, NULL}
	};
	unsigned int num = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
	return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[num].opcode && op)
	{
	if (strcmp(op, opst[num].opcode) == 0)
	{   opst[num].f(stack, counter);
	return (0);
	}
	num++;
	}
	if (op && opst[num].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
	fclose(file);
	free(content);
	free_stack(*stack);
	exit(EXIT_FAILURE); }
	return (1);
}
