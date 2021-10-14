/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:35:08 by ercordho          #+#    #+#             */
/*   Updated: 2021/10/14 18:14:10 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static int	can_push_b(t_stack *stack, int loop, int median)
{
	int	pos;
	int	chunck_value;
	int	solved_value;
	int	ret;

	pos = (loop + 1) * median;
	chunck_value = stack->a[stack->chunk_pos];
	solved_value = stack->solved[stack->size_a - (loop + 1) * median];
	ret = 0;
	if (pos >= (int)stack->size_a || chunck_value >= solved_value)
		ret++;
	solved_value = stack->solved[stack->size_a - loop * median];
	if ((loop == 0 || chunck_value < solved_value))
		ret++;
	if (ret == 2)
		return (1);
	return (-1);
}

void	rotate_a_push_b(t_stack *stack, int loop, int median, int nbr_rot)
{
	int	i;

	i = -1;
	while (++i < nbr_rot)
	{
		if (can_push_b(stack, loop, median) == 1)
			push_b(stack);
		else
			rotate_a(stack);
	}
}

static double	ft_abs(double nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

static int	closest_finder(t_stack *stack)
{
	int	min_bounds;
	int	max_bounds;

	array_get_bounds(stack->a, stack->chunk_pos, stack);
	min_bounds = (int)ft_abs((double)2 * stack->bounds[0] - stack->chunk_pos);
	max_bounds = (int)ft_abs((double)2 * stack->bounds[1] - stack->chunk_pos);
	if (min_bounds < max_bounds)
		return (stack->bounds[1]);
	return (stack->bounds[0]);
}

void	rotate_b_push_a(t_stack *stack)
{
	int	i;
	int	min_val;

	i = 0;
	min_val = closest_finder(stack);
	if (min_val >= (int)stack->chunk_pos / 2)
	{
		while (i++ < (int)stack->chunk_pos - 1 - min_val)
			rotate_b(stack);
	}
	else
	{
		while (i++ < min_val + 1)
			reverse_rotate_b(stack);
	}
	push_a(stack);
	if (stack->chunk_pos > 0)
	{
		if (stack->a[stack->chunk_pos] < stack->a[stack->chunk_pos - 1])
			rotate_a(stack);
	}
}
