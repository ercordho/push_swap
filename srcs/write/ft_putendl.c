/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:14:34 by ercordho          #+#    #+#             */
/*   Updated: 2021/10/05 17:18:19 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

size_t	ft_putendl(const char *str)
{
	if (str == NULL)
		return (ft_putstr("(null)\n"));
	return (ft_putstr(str) + ft_putchar('\n'));
}
