/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 16:44:17 by mmihail           #+#    #+#             */
/*   Updated: 2017/01/10 16:45:30 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strstr(const char *s1, const char *s2)
{
	const char	*cpy;
	const char	*cpy2;

	cpy = s1;
	if (!*s2)
		return ((char *)s1);
	cpy2 = s2;
	while (*cpy2 && *cpy)
	{
		if (*cpy++ == *cpy2++)
		{
		}
		else
		{
			cpy2 = s2;
			s1++;
			cpy = s1;
		}
	}
	if (*cpy2 == '\0')
		return ((char *)s1);
	else
		return (NULL);
}
