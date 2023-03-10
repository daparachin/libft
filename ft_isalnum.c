/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pparachi <pparachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:35:53 by pparachi          #+#    #+#             */
/*   Updated: 2023/01/15 12:08:41 by pparachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isalnum(char c)
{
	int	val;

	val = ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
			|| (c >= '0' && c <= '9'));
	return (val);
}
