/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:31:29 by ercordho          #+#    #+#             */
/*   Updated: 2021/12/02 00:00:56 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	if (str == (void *)0)
		return (0);
	len = 0;
	while (str[len])
		len++;
	return (len);
}
