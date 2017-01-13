/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 16:44:16 by mmihail           #+#    #+#             */
/*   Updated: 2017/01/10 16:44:24 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*rez;

	if (!(rez = (char*)malloc(size + 1)))
		return (NULL);
	ft_bzero(rez, size + 1);
	return (rez);
}
