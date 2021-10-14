/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_display.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:30:47 by ercordho          #+#    #+#             */
/*   Updated: 2021/10/12 01:14:51 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	array_display(int *a, size_t size_a)
{
	int	i;

	i = -1;
	while (++i < (int)size_a)
	{
		ft_putnbr((long)a[i]);
		ft_putchar('\n');
	}
}
