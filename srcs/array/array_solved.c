/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_solved.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 02:48:13 by ercordho          #+#    #+#             */
/*   Updated: 2021/10/12 02:48:29 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	*array_solved(t_stack stack)
{
	int	*solved;
	int	i;

	solved = (int *)malloc(sizeof(int) * stack.size_a);
	if (solved == NULL)
		return (NULL);
	i = -1;
	while (++i < (int)stack.size_a)
		solved[i] = stack.a[i];
	i = -1;
	while (++i < (int)stack.size_a - 1)
	{
		if (solved[i] > solved[i + 1])
		{
			ft_swap(&solved[i], &solved[i + 1]);
			i = -1;
		}
	}
	return (solved);
}
