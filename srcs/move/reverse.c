/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:36:12 by ercordho          #+#    #+#             */
/*   Updated: 2021/10/14 19:45:05 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	reverse_rotate_a(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->size_a - stack->chunk_pos < 2)
		return ;
	tmp = stack->a[stack->size_a - 1];
	i = stack->size_a;
	while (--i > (int)stack->chunk_pos)
		ft_swap(&stack->a[i], &stack->a[i - 1]);
	stack->a[i] = tmp;
	ft_putendl("rra");
}

void	reverse_rotate_b(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->chunk_pos < 2)
		return ;
	tmp = stack->a[0];
	i = -1;
	while (++i < (int)stack->chunk_pos - 1)
		ft_swap(&stack->a[i], &stack->a[i + 1]);
	stack->a[i] = tmp;
	ft_putendl("rrb");
}
