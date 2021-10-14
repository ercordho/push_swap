/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:50:00 by ercordho          #+#    #+#             */
/*   Updated: 2021/10/14 19:27:44 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	rotate_a(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->size_a - stack->chunk_pos < 2)
		return ;
	tmp = stack->a[stack->chunk_pos];
	i = stack->chunk_pos - 1;
	while (++i < (int)stack->size_a - 1)
		ft_swap(&stack->a[i], &stack->a[i + 1]);
	stack->a[i] = tmp;
	ft_putendl("ra");
}

void	rotate_b(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->chunk_pos < 2)
		return ;
	tmp = stack->a[stack->chunk_pos - 1];
	i = stack->chunk_pos;
	while (--i > 0)
		ft_swap(&stack->a[i], &stack->a[i - 1]);
	stack->a[i] = tmp;
	ft_putendl("rb");
}
