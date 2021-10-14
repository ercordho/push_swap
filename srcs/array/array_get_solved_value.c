/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_get_solved_value.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 02:58:33 by ercordho          #+#    #+#             */
/*   Updated: 2021/10/12 03:04:18 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	array_get_solved_value(t_stack stack)
{
	int	to_find;
	int	index;

	to_find = stack.a[stack.chunk_pos - 1];
	index = array_get_solved_index(stack.solved, to_find, stack.size_a);
	return (stack.solved[index + 1 % stack.size_a]);
}
