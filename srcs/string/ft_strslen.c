/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strslen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:23:49 by ercordho          #+#    #+#             */
/*   Updated: 2021/10/05 15:28:43 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

size_t	ft_strslen(const char **strs)
{
	size_t	len;

	if (strs == NULL)
		return (0);
	len = 0;
	while (strs[len])
		len++;
	return (len);
}
