#include "push_swap.h"

void	print_stack(t_stack *a, t_stack *b)
{
	for (int j = 0; j < LOOP_SIZE; j++)
	{
		printf("a->content reverse = %s \n", (char *)a->content);
		a = a->prev;
	}
	for (int j = 0; j < LOOP_SIZE; j++)
	{
		printf("a->content =         %s \n", (char *)a->content);
		a = a->next;
	}
	for (int j = 0; j < LOOP_SIZE; j++)
	{
		printf("b->content =         %s \n", (char *)b->content);
		b = b->next;
	}
	for (int j = 0; j < LOOP_SIZE; j++)
	{
		printf("b->content reverse = %s \n", (char *)b->content);
		b = b->prev;
	}
}