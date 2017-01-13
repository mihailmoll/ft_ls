/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 16:44:17 by mmihail           #+#    #+#             */
/*   Updated: 2017/01/10 16:45:30 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*dest;

	if (!s)
		return (NULL);
	if (!(dest = (char *)malloc((len + 1) * sizeof(*s))))
		return (NULL);
	ft_strncpy(dest, &(s[start]), len);
	dest[len] = '\0';
	return (dest);
}
