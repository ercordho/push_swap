/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_is_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 22:22:22 by ercordho          #+#    #+#             */
/*   Updated: 2021/10/12 01:16:02 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	array_is_sort(int *a, size_t size_a)
{
	int	i;

	i = -1;
	while (++i < (int)size_a - 1)
	{
		if (a[i] > a[i + 1])
			return (-1);
	}
	return (1);
}
