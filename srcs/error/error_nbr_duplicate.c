/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_nbr_duplicate.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:11:33 by ercordho          #+#    #+#             */
/*   Updated: 2021/10/05 23:12:15 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	error_nbr_duplicate(void)
{
	ft_putstr(PRINT_RED);
	ft_putendl("ERROR");
	ft_putendl("Duplicates were detected.");
	ft_putstr(PRINT_NRM);
}
