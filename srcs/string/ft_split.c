/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:47:52 by ercordho          #+#    #+#             */
/*   Updated: 2021/12/02 00:00:56 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static char	**clean_memory(void *strs)
{
	ft_memdels((void **)&strs, (void **)strs);
	return (NULL);
}

static size_t	get_word_len(const char *str, const char *set)
{
	size_t	len;
	int		i;

	if (str == (void *)0 || set == (void *)0)
		return (0);
	len = 0;
	i = 0;
	while (str[i] && ft_ischarset(set, str[i]) == -1)
	{
		len++;
		i++;
	}
	return (len);
}

static char	*split_copy_word(const char *str, const char *set)
{
	int		len;
	char	*n_str;
	int		i;

	len = get_word_len(str, set);
	if (len == 0)
		return (NULL);
	n_str = (char *)malloc(sizeof(char ) * (len + 1));
	n_str = (char *)ft_memset((void *)n_str, '\0', len + 1);
	if (n_str == (void *)0)
		return (NULL);
	i = 0;
	while (*str && ft_ischarset(set, *str) == -1)
		n_str[i++] = *str++;
	return (n_str);
}

char	**ft_split(const char *str, const char *set)
{
	int		count_words;
	char	**strs;
	int		y;

	count_words = countwords(str, set);
	if (count_words == 0)
		return (NULL);
	strs = (char **)malloc(sizeof(char *) * (count_words + 1));
	if (strs == (void *)0)
		return (NULL);
	y = 0;
	while (*str)
	{
		while (*str && ft_ischarset(set, *str) >= 0)
			str++;
		if (*str && ft_ischarset(set, *str) == -1)
		{
			strs[y] = split_copy_word(str, set);
			if (strs[y] == (void *)0)
				return (clean_memory((void *)strs));
			str += ft_strlen(strs[y++]);
		}
	}
	strs[y] = NULL;
	return (strs);
}
