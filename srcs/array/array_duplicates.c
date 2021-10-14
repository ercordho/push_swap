/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_duplicates.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 22:24:08 by ercordho          #+#    #+#             */
/*   Updated: 2021/10/12 01:15:17 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	array_duplicates(int *a, size_t size_a)
{
	int	i;
	int	j;

	i = -1;
	while (++i < (int)size_a)
	{
		j = i;
		while (++j < (int)size_a)
		{
			if (a[i] == a[j])
			{
				error_nbr_duplicate();
				return (-1);
			}
		}
	}
	return (1);
}
