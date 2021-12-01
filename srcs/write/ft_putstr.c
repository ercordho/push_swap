/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:33:58 by ercordho          #+#    #+#             */
/*   Updated: 2021/12/02 00:02:36 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

size_t	ft_putstr(const char *str)
{
	size_t	len;

	if (str == (void *)0)
	{
		if (__APPLE__)
			return (ft_putstr("(null)"));
		return (ft_putstr("(nil)"));
	}
	len = 0;
	while (*str)
		len += ft_putchar(*str++);
	return (len);
}
