/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 16:44:15 by mmihail           #+#    #+#             */
/*   Updated: 2017/01/10 16:44:23 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	siz_dst;
	unsigned int	siz_src;
	int				len;

	siz_dst = ft_strlen(dst);
	siz_src = ft_strlen(src);
	len = size - 1 - siz_dst;
	if (size <= siz_dst)
		return (size + siz_src);
	while (*dst)
		dst++;
	while (*src && len)
	{
		*dst++ = *src++;
		len--;
	}
	*dst = '\0';
	return (siz_dst + siz_src);
}
