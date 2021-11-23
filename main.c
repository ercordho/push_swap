/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:44:44 by ercordho          #+#    #+#             */
/*   Updated: 2021/11/23 15:05:08 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

int	main(int argc, const char **argv)
{
	if (argc == 1)
		exit(EXIT_FAILURE);
	if (argc == 2)
	{
		if (push_swap(NULL, argv[argc - 1]) == -1)
			exit(EXIT_FAILURE);
	}
	if (argc > 2)
	{
		if (push_swap(argv + 1, NULL) == -1)
			exit(EXIT_FAILURE);
	}
	exit(EXIT_SUCCESS);
}
