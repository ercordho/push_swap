/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_nbr_isnt_num.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:15:30 by ercordho          #+#    #+#             */
/*   Updated: 2021/10/05 23:17:08 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	error_nbr_isnt_num(void)
{
	ft_putstr(PRINT_RED);
	ft_putendl("ERROR");
	ft_putendl("A non-numeric character was detected.");
	ft_putstr(PRINT_NRM);
}
