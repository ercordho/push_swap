/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:29:24 by ercordho          #+#    #+#             */
/*   Updated: 2021/11/10 16:05:55 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static void	sort_2(t_stack *stack)
{
	stack->chunk_pos = 0;
	if (stack->a[0] > stack->a[1])
		swap_a(stack);
}

static void	sort_3(t_stack *stack)
{
	array_get_bounds(stack->a, stack->size_a, stack);
	if ((stack->bounds[0] + 1) % 3 == stack->bounds[1])
		swap_a(stack);
	if (stack->bounds[0] == 2)
		reverse_rotate_a(stack);
	else if (stack->bounds[1] != 2)
		rotate_a(stack);
}

static void	sort_5(t_stack *stack)
{
	int	i;
	int	normi_pos;

	while (stack->size_a - stack->chunk_pos > 3)
		push_b(stack);
	normi_pos = stack->chunk_pos;
	array_get_bounds(stack->a + normi_pos, stack->size_a - normi_pos, stack);
	if ((stack->bounds[0] + 1) % 3 == stack->bounds[1])
		swap_a(stack);
	if (stack->size_a == 5)
		if (stack->a[stack->chunk_pos - 2] == array_get_solved_value(*stack))
			swap_b(stack);
	while (stack->chunk_pos > 0)
		if (stack->a[stack->chunk_pos] == array_get_solved_value(*stack))
			push_a(stack);
	else
		reverse_rotate_a(stack);
	while (stack->a[0] != stack->solved[0])
	{
		i = array_get_solved_index(stack->solved, stack->a[0], stack->size_a);
		if (i * 2 < (int)stack->size_a)
			reverse_rotate_a(stack);
		else
			rotate_a(stack);
	}
}

static void	sort_chunck(t_stack *stack, size_t median)
{
	int	loop;
	int	i;
	int	rot;

	loop = -1;
	rot = 0;
	while (++loop * (int)median < (int)stack->size_a)
	{
		if (rot + 2 * (stack->size_a - loop * median) <= stack->size_a - rot)
		{
			i = -1;
			while (++i < (int)(rot + (stack->size_a - loop * median)))
				reverse_rotate_a(stack);
			rot = loop * median;
		}
		rotate_a_push_b(stack, loop, median, stack->size_a - rot);
		rot = 0;
		while (stack->chunk_pos > 0)
		{
			rotate_b_push_a(stack);
			rot += stack->nbr_of_rot;
		}
	}
	while (stack->a[stack->size_a - 1] < stack->a[0])
		reverse_rotate_a(stack);
}

void	sort(t_stack *stack)
{
	if (stack->size_a == 2)
		sort_2(stack);
	else if (stack->size_a == 3)
		sort_3(stack);
	else if (stack->size_a <= 5)
		sort_5(stack);
	else if (stack->size_a <= 50)
		sort_chunck(stack, (stack->size_a + 1) / 2);
	else if (stack->size_a <= 200)
		sort_chunck(stack, (stack->size_a + 2) / 3);
	else
		sort_chunck(stack, (stack->size_a + 7) / 8);
}
