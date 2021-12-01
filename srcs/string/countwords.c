/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   countwords.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:54:27 by ercordho          #+#    #+#             */
/*   Updated: 2021/12/02 00:00:56 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	countwords(const char *str, const char *set)
{
	int	count;
	int	ret;

	if (str == (void *)0 || set == (void *)0)
		return (0);
	count = 0;
	ret = 0;
	while (*str)
	{
		if (ft_ischarset(set, *str) >= 0)
			ret = 0;
		else
		{
			if (ret == 0)
				count++;
			ret = 1;
		}
		str++;
	}
	return (count);
}
