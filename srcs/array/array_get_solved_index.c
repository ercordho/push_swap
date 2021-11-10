/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_get_solved_index.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 03:03:03 by ercordho          #+#    #+#             */
/*   Updated: 2021/11/10 15:25:00 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	array_get_solved_index(int *solved, int to_find, size_t size_a)
{
	int	i;

	i = -1;
	while (++i < (int)size_a)
	{
		if (solved[i] == to_find)
			break ;
	}
	return (i);
}
