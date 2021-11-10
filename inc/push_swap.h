/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:39:02 by ercordho          #+#    #+#             */
/*   Updated: 2021/11/10 16:53:22 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

# define BUFFER_SIZE 1

# define PRINT_NRM	"\x1B[0m"
# define PRINT_RED	"\x1B[31m"

typedef struct s_stack
{
	int		*a;
	int		*solved;
	size_t	chunk_pos;
	size_t	size_a;
	int		bounds[2];
	int		nbr_of_rot;
}				t_stack;

/*
**	ARRAY
*/
void	array_display(int *a, size_t size_a);
int		array_duplicates(int *a, size_t size_a);
int		array_fill(t_stack *stack, const char **args);
void	array_get_bounds(int *a, size_t size, t_stack *stack);
int		array_get_solved_index(int *solved, int to_find, size_t size_a);
int		array_get_solved_value(t_stack stack);
int		array_get_stack_a(const char **args, const char *arg, t_stack *stack);
int		array_is_sort(int *a, size_t size_a);
int		array_nbr(const char *nbr);
int		*array_solved(t_stack stack);

/*
**	ASCII
*/
int		ft_ischarset(const char *set, char c);
int		ft_isdigit(int c);
int		ft_iswhitespace(int c);

/*
**	CONVERT
*/
long	ft_atol(const char *str);

/*
**	ERROR
*/
void	error_nbr_duplicate(void);
void	error_nbr_greater_int_max(void);
void	error_nbr_isnt_int(void);
void	error_nbr_isnt_num(void);
void	error_nbr_less_int_min(void);

/*
**	MEMORY
*/
void	ft_memdel(void **ptr);
void	ft_memdels(void **ptr, void **content);
void	*ft_memset(void *ptr, int c, size_t end);
void	ft_swap(int *a, int *b);

/*
**	MOVE
*/
void	push_a(t_stack *stack);
void	push_b(t_stack *stack);
void	reverse_rotate_a(t_stack *stack);
void	reverse_rotate_b(t_stack *stack);
void	rotate_a(t_stack *stack);
void	rotate_b(t_stack *stack);
void	rotate_a_push_b(t_stack *stack, int loop, int median, int nbr_rot);
void	rotate_b_push_a(t_stack *stack);
void	swap_a(t_stack *stack);
void	swap_b(t_stack *stack);

/*
**	NUMBER
*/
double	ft_nbrlen(double nbr);

/*
**	SORT
*/
void	sort(t_stack *stack);

/*
**	STRING
*/
int		countwords(const char *str, const char *set);
char	**ft_split(const char *str, const char *set);
char	*ft_strdup(const char *str);
size_t	ft_strlen(const char *str);
size_t	ft_strslen(const char **strs);

/*
**	WRITE
*/
size_t	ft_putchar(char c);
size_t	ft_putendl(const char *str);
size_t	ft_putnbr(long nbr);
size_t	ft_putstr(const char *str);

#endif
