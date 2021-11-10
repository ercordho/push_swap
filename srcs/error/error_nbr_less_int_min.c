/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_nbr_less_int_min.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:07:54 by ercordho          #+#    #+#             */
/*   Updated: 2021/11/10 16:43:14 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	error_nbr_less_int_min(void)
{
	ft_putstr(PRINT_RED);
	ft_putendl("ERROR");
	ft_putendl("The number detected is less than the value of int min.");
	ft_putendl("INT_MIN = -2147483648");
	ft_putstr(PRINT_NRM);
}
