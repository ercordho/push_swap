/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:39:41 by ercordho          #+#    #+#             */
/*   Updated: 2021/10/14 17:59:36 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	push_a(t_stack *stack)
{
	if (stack->chunk_pos == 0)
		return ;
	stack->chunk_pos--;
	ft_putendl("pa");
}

void	push_b(t_stack *stack)
{
	if (stack->chunk_pos == stack->size_a - 1)
		return ;
	stack->chunk_pos++;
	ft_putendl("pb");
}
