/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:04:48 by ercordho          #+#    #+#             */
/*   Updated: 2021/12/02 00:00:56 by ercordho         ###   ########.fr       */
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
	if (stack.a == (void *)0)
		return (-1);
	stack.chunk_pos = 0;
	stack.solved = array_solved(stack);
	if (stack.solved == (void *)0)
	{
		free((void *)stack.a);
		return (-1);
	}
	if (array_is_sort(stack.a, stack.size_a) == -1)
		sort(&stack);
	free((void *)stack.a);
	free((void *)stack.solved);
	return (1);
}
