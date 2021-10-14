/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:33:58 by ercordho          #+#    #+#             */
/*   Updated: 2021/10/05 15:34:28 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

size_t	ft_putstr(const char *str)
{
	size_t	len;

	if (str == NULL)
		return (ft_putstr("(null)"));
	len = 0;
	while (*str)
		len += ft_putchar(*str++);
	return (len);
}
