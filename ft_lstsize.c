/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pparachi <pparachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:47:03 by pparachi          #+#    #+#             */
/*   Updated: 2023/01/21 15:47:26 by pparachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	c;

	c = 0;
	while (lst)
	{
		lst = lst->next;
		c++;
	}
	return (c);
}
