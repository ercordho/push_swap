/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_nbr_isnt_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:21:17 by ercordho          #+#    #+#             */
/*   Updated: 2021/10/05 23:22:22 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	error_nbr_isnt_int(void)
{
	ft_putstr(PRINT_RED);
	ft_putendl("ERROR");
	ft_putendl("The number detected does not fit in an int.");
	ft_putendl("INT_MIN = -2147483648 | INT_MAX = 2147483647");
	ft_putstr(PRINT_NRM);
}
