/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 22:45:38 by ercordho          #+#    #+#             */
/*   Updated: 2021/10/06 13:17:38 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	array_fill(t_stack *stack, const char **args)
{
	int		i;
	long	tmp_nbr;

	i = -1;
	while (args[++i])
	{
		if (array_nbr(args[i]) == -1)
			return (-1);
		tmp_nbr = ft_atol(args[i]);
		if (tmp_nbr > 2147483647)
		{
			error_nbr_greater_int_max();
			return (-1);
		}
		if (tmp_nbr < -2147483648)
		{
			error_nbr_less_int_min();
			return (-1);
		}
		stack->a[i] = (int)tmp_nbr;
	}
	if (array_duplicates(stack->a, stack->size_a) == -1)
		return (-1);
	return (1);
}
