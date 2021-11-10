/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:44:44 by ercordho          #+#    #+#             */
/*   Updated: 2021/11/10 16:10:50 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	push_swap(const char **args, const char *arg)
{
	t_stack	stack;

	if (array_get_stack_a(args, arg, &stack) == -1)
	{
		free((void *)stack.a);
		return (-1);
	}
	if (stack.a == NULL)
		return (-1);
	stack.chunk_pos = 0;
	stack.solved = array_solved(stack);
	if (stack.solved == NULL)
	{
		free((void *)stack.a);
		return (-1);
	}
	if (array_is_sort(stack.a, stack.size_a) == -1)
		sort(&stack);
	array_display(stack.a, stack.size_a);
	free((void *)stack.a);
	free((void *)stack.solved);
	return (1);
}

int	main(int argc, const char **argv)
{
	if (argc == 1)
	{
		system("leaks push_swap");
		exit(EXIT_FAILURE);
	}
	if (argc == 2)
	{
		if (push_swap(NULL, argv[argc - 1]) == -1)
		{
			system("leaks push_swap");
			exit(EXIT_FAILURE);
		}
	}
	if (argc > 2)
	{
		if (push_swap(argv + 1, NULL) == -1)
		{
			system("leaks push_swap");
			exit(EXIT_FAILURE);
		}
	}
	system("leaks push_swap");
	exit(EXIT_SUCCESS);
}
