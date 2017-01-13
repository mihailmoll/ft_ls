/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 16:44:10 by mmihail           #+#    #+#             */
/*   Updated: 2017/01/10 16:44:22 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_len(int n, size_t *len, int *size)
{
	*len = 1;
	if (n >= 0)
	{
		*len = 0;
		n = -n;
	}
	*size = 1;
	while (n / *size < -9)
	{
		*size *= 10;
		*len += 1;
	}
}

char			*ft_itoa(int n)
{
	size_t		len;
	int			size;
	size_t		tmp;
	char		*str;

	ft_len(n, &len, &size);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (str == NULL)
		return (NULL);
	tmp = 0;
	if (n < 0)
	{
		str[tmp] = '-';
		tmp++;
	}
	if (n > 0)
		n = -n;
	while (size >= 1)
	{
		str[tmp++] = -(n / size % 10) + 48;
		size /= 10;
	}
	str[tmp] = '\0';
	return (str);
}
