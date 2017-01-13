/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 16:44:10 by mmihail           #+#    #+#             */
/*   Updated: 2017/01/10 16:44:22 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*str;
	unsigned char	d;

	d = (unsigned char)c;
	i = 0;
	str = (unsigned char*)s;
	while (n--)
	{
		if (str[i] == d)
			return (str + i);
		i++;
	}
	return (NULL);
}
