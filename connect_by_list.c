#include "push_swap.h"

# define LOOP_SIZE 8

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	t_stack	*start_a;
	t_stack	*start_b;
	t_stack	*tmp;
	int	i;

	i = 1;
	a = ft_lstnew(NULL);
	b = ft_lstnew(NULL);
	start_a = a;
	start_b = b;
	while (i < argc)
	{
		tmp = ft_lstnew(argv[i]);
		tmp->prev = a;
		a->next = tmp;
		a = tmp;
		if ((i + 1) == argc)
		{
			a->next = start_a;
			start_a->prev = a;
		}
		i++;
	}

	printf("--------------------\n");
	for (int j = 0; j < LOOP_SIZE; j++)
	{
		printf("a->content =         %s \n", (char *)a->content);
		a = a->next;
	}
	printf("--------------------\n");
	for (int j = 0; j < LOOP_SIZE; j++)
	{
		printf("a->content reverse = %s \n", (char *)a->content);
		a = a->prev;
	}
	printf("--------------------\n");
	for (int j = 0; j < LOOP_SIZE; j++)
	{
		printf("a->content =         %s \n", (char *)b->content);
		b = b->next;
	}
	printf("--------------------\n");
	for (int j = 0; j < LOOP_SIZE; j++)
	{
		printf("a->content reverse = %s \n", (char *)b->content);
		b = b->prev;
	}
	printf("--------------------\n");
}