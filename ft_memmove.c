/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavelparachin <pavelparachin@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:36:17 by pparachi          #+#    #+#             */
/*   Updated: 2023/01/15 17:56:48 by pparachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	if (!dst && !src)
		return (0);
	if (src < dst && (src + len) > dst)
	{
		d = (char *) dst + len - 1;
		s = (char *) src + len - 1;
		while (len--)
			*d-- = *s--;
	}
	else
	{
		d = (char *) dst;
		s = (char *) src;
		while (len--)
			*d++ = *s++;
	}
	return (dst);
}
