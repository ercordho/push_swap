/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ischarset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:53:04 by ercordho          #+#    #+#             */
/*   Updated: 2021/10/05 15:53:16 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	ft_ischarset(const char *set, char c)
{
	int		i;

	i = -1;
	while (set[++i])
	{
		if (set[i] == c)
			return (i);
	}
	return (-1);
}
