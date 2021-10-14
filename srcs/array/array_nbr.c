/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 22:26:55 by ercordho          #+#    #+#             */
/*   Updated: 2021/10/05 23:23:00 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	array_nbr(const char *nbr)
{
	size_t	is_neg;
	size_t	len;

	is_neg = 0;
	len = ft_strlen(nbr);
	if (*nbr == '-')
	{
		is_neg = 1;
		nbr++;
	}
	while (*nbr)
	{
		if (ft_isdigit((int)*(nbr++)) == 0)
		{
			error_nbr_isnt_num();
			return (-1);
		}
	}
	if (len - is_neg > 10)
	{
		error_nbr_isnt_int();
		return (-1);
	}
	return (1);
}
