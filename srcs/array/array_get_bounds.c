/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_get_bounds.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:15:01 by ercordho          #+#    #+#             */
/*   Updated: 2021/10/14 17:55:52 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	array_get_bounds(int *a, size_t size, t_stack *stack)
{
	int	i;

	i = -1;
	stack->bounds[0] = 0;
	stack->bounds[1] = 0;
	while (++i < (int)size)
	{
		if (a[i] < a[stack->bounds[0]])
			stack->bounds[0] = i;
		if (a[i] > a[stack->bounds[1]])
			stack->bounds[1] = i;
	}
}
