/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:08:20 by ercordho          #+#    #+#             */
/*   Updated: 2021/10/14 18:00:26 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	swap_a(t_stack *stack)
{
	size_t	pos;

	if (stack->size_a - stack->chunk_pos >= 2)
	{
		pos = stack->chunk_pos;
		ft_swap(&stack->a[pos], &stack->a[pos + 1]);
		ft_putendl("sa");
	}
}

void	swap_b(t_stack *stack)
{
	size_t	pos;

	if (stack->chunk_pos > 1)
	{
		pos = stack->chunk_pos;
		ft_swap(&stack->a[pos - 1], &stack->a[pos - 2]);
		ft_putendl("sb");
	}
}
