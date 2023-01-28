/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavelparachin <pavelparachin@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:36:09 by pparachi          #+#    #+#             */
/*   Updated: 2023/01/17 21:16:23 by pparachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*p;

	p = (char *)s;
	while (n--)
	{
		if (*p == (char)c)
		{
			return ((void *)p);
		}
		p++;
	}
	return (NULL);
}
