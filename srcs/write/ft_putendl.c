/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:14:34 by ercordho          #+#    #+#             */
/*   Updated: 2021/12/02 00:02:00 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

size_t	ft_putendl(const char *str)
{
	if (str == (void *)0)
	{
		if (__APPLE__)
			return (ft_putendl("(null)"));
		return (ft_putendl("(nil)"));
	}
	return (ft_putstr(str) + ft_putchar('\n'));
}
