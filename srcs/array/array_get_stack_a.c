/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_get_stack_a.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 22:59:17 by ercordho          #+#    #+#             */
/*   Updated: 2021/10/12 00:47:39 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static int	clear_memory(const char *arg, char **args_a, int val)
{
	if (arg)
		ft_memdels((void **)&args_a, (void **)args_a);
	return (val);
}

int	array_get_stack_a(const char **args, const char *arg, t_stack *stack)
{
	char	**args_a;

	args_a = NULL;
	if (args && arg == NULL)
		args_a = (char **)args;
	else if (arg && args == NULL)
	{
		args_a = ft_split(arg, " ");
		if (args_a == NULL)
			return (-1);
	}
	stack->a = (int *)malloc(sizeof(int) * ft_strslen((const char **)args_a));
	if (stack->a == NULL)
		return (clear_memory(arg, args_a, -1));
	stack->size_a = ft_strslen((const char **)args_a);
	if (array_fill(stack, (const char **)args_a) == -1)
		return (clear_memory(arg, args_a, -1));
	return (clear_memory(arg, args_a, 1));
}
