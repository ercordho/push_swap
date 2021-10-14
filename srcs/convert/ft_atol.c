/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:16:37 by ercordho          #+#    #+#             */
/*   Updated: 2021/10/05 23:27:11 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

long	ft_atol(const char *str)
{
	long	sign;
	long	result;

	sign = 1;
	result = 0;
	while (*str && ft_iswhitespace(*str) == 1)
		str++;
	if (ft_ischarset("-+", *str) != -1)
	{
		if (*str++ == '-')
			sign *= -1;
	}
	while (*str && ft_isdigit((int)*str) == 1)
		result = result * 10 + (*str++ - '0');
	return (result * sign);
}
