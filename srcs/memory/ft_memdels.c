/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdels.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:51:42 by ercordho          #+#    #+#             */
/*   Updated: 2021/10/05 15:51:52 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ft_memdels(void **ptr, void **content)
{
	if (ptr && content)
	{
		while (*content)
			ft_memdel(&(*content++));
		ft_memdel(&(*ptr));
	}
}
