/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_nbr_greater_int_max.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:03:49 by ercordho          #+#    #+#             */
/*   Updated: 2021/10/05 23:25:17 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	error_nbr_greater_int_max(void)
{
	ft_putstr(PRINT_RED);
	ft_putendl("ERROR");
	ft_putendl("The number detected is greater than the value of int max.");
	ft_putendl("INT_MAX = 2147483647");
	ft_putstr(PRINT_NRM);
}
