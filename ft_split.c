/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavelparachin <pavelparachin@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 21:19:09 by pparachi          #+#    #+#             */
/*   Updated: 2023/01/18 18:03:31 by pparachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	char	*cpy_word(const char *str, int start, int finish)
{
	unsigned int	i;
	char			*word;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

static	int	word_counter(const char *str, char c)
{
	unsigned int	i;
	unsigned int	space;

	i = 0;
	space = 0;
	while (*str)
	{
		if (*str != c && space == 0)
		{
			space = 1;
			i++;
		}
		else if (*str == c)
			space = 0;
		str++;
	}
	return (i);
}

char	**null_terminate(char **str, unsigned int j)
{
	str[j] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	int				index;
	char			**split;

	if (!s)
		return (0);
	split = malloc((word_counter(s, c) + 1) * sizeof(char *));
	if (!split)
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = cpy_word(s, index, i);
			index = -1;
		}
		i++;
	}
	return (null_terminate(split, j));
}
